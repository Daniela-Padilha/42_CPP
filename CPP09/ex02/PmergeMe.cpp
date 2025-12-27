/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 00:38:42 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/12/27 19:44:32                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/PmergeMe.hpp"

// ============== Orthodox Methods ==============

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other)
	: _pairs(other._pairs),
		_vect(other._vect),
		_deq(other._deq),
		_leftover(other._leftover),
		_hasLeftover(other._hasLeftover)
{}

PmergeMe::~PmergeMe() {}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
	if (this != &other) {
		_pairs = other._pairs;
		_vect = other._vect;
		_deq = other._deq;
		_leftover = other._leftover;
		_hasLeftover = other._hasLeftover;
	}
	return *this;
}

// ============== Algorithm Begins ==============

void PmergeMe::start (char **av) {
	parse(av);

	std::vector<int> _input;
    for (int i = 1; av[i]; i++) {
        _input.push_back(std::atoi(av[i]));
	}

	std::cout << "Before: ";
	for (size_t i = 0; i < _input.size(); i++) {
		std::cout << _input[i] << " ";
	}
	std::cout << std::endl;

	clock_t vect_start = clock();
	useVect();
	clock_t vect_end = clock();

	clock_t deq_start = clock();
	useDeq();
	clock_t deq_end = clock();

	std::cout << "After: ";
	for (size_t i = 0; i < _vect.size(); i++) {
		std::cout << _vect[i] << " ";
	}
	std::cout << std::endl;

	double vectTime = double(vect_end - vect_start) / CLOCKS_PER_SEC * 1e6;
	double deqTime = double(deq_end - deq_start) / CLOCKS_PER_SEC * 1e6;
	std::cout << "Time to process a range of "
			  << _vect.size()
			  << " elements with std::vector : "
			  << std::fixed
			  << std::setprecision(5)
			  << vectTime
			  << " us" << std::endl;
	
	std::cout << "Time to process a range of "
			  << _deq.size()
			  << " elements with std::deque : "
			  << std::fixed
			  << std::setprecision(5)
			  << deqTime
			  << " us" << std::endl;
}

void PmergeMe::useVect() {
	makePairsVect();
	sortInsidePairs();
	sortPairs();
	insertBigsVect();
	insertSmallsVect();
	insertLeftoverVect();
}

void PmergeMe::useDeq() {
	makePairsDeq();
	sortInsidePairs();
	sortPairs();
	insertBigsDeq();
	insertSmallsDeq();
	insertLeftoverDeq();
}

// ============== Helpers ==============

void PmergeMe::parse(char **av) {
	for (int i = 1; av[i]; i++) {
		std::string s(av[i]);
		if (s.empty())
			throw Error();
		for (size_t j = 0; j < s.length(); j++) {
			if (!std::isdigit(s[j]))
				throw Error();
		}
		long n = std::strtol(s.c_str(), NULL, 10);
		if (n < 0 || n > INT_MAX)
			throw Error();
		_vect.push_back(n);
		_deq.push_back(n);
	}
}

void PmergeMe::sortInsidePairs() {
	for (size_t i = 0; i < _pairs.size(); i++) {
		if (_pairs[i].first > _pairs[i].second) {
			int temp = _pairs[i].first;
			_pairs[i].first = _pairs[i].second;
			_pairs[i].second = temp;
		}
	}
}

void PmergeMe::sortPairs() {
	for (size_t i = 0; i < _pairs.size(); i++) {
		for (size_t j = 0; j + 1 < _pairs.size() - i; j++) {
			if (_pairs[j].second > _pairs[j + 1].second) {
				std::pair<int, int> tmp = _pairs[j];
				_pairs[j] = _pairs[j + 1];
				_pairs[j + 1] = tmp;
			}
		}
	}
}

// ============== Vect version ==============

void PmergeMe::makePairsVect() {
	_pairs.clear();
	_hasLeftover = false;
	size_t i = 0;

	while (i + 1 < _vect.size()) {
		_pairs.push_back(std::make_pair(_vect[i], _vect[i + 1]));
		i += 2;
	}
	if (i < _vect.size()) {
		_leftover = _vect[i];
		_hasLeftover = true;
	}
}

void PmergeMe::insertBigsVect() {
	_vect.clear();
	for (size_t i = 0; i < _pairs.size(); i++) {
		_vect.push_back(_pairs[i].second);
	}
}

void PmergeMe::insertSmallsVect() {
	for (size_t i = 0; i < _pairs.size(); i++) {
		int 	small = _pairs[i].first;
		size_t	start = 0;
		size_t	end = _vect.size();
		while (start < end) {
			size_t middle = start + (end - start) / 2;
			if (small < _vect[middle])
				end = middle;
			else
				start = middle + 1;
		}
		_vect.insert(_vect.begin() + start, small);

	}
}

void PmergeMe::insertLeftoverVect() {
	if (!_hasLeftover)
		return ;
	size_t	start = 0;
	size_t	end = _vect.size();
	while (start < end) {
		size_t middle = start + (end - start) / 2;
		if (_leftover < _vect[middle])
			end = middle;
		else
			start = middle + 1;
	}
	_vect.insert(_vect.begin() + start, _leftover);
}

// ============== Deque version ==============

void PmergeMe::makePairsDeq() {
	_pairs.clear();
	_hasLeftover = false;
	size_t i = 0;

	while (i + 1 < _deq.size()) {
		_pairs.push_back(std::make_pair(_deq[i], _deq[i + 1]));
		i += 2;
	}
	if (i < _deq.size()) {
		_leftover = _deq[i];
		_hasLeftover = true;
	}
}

void PmergeMe::insertBigsDeq() {
	_deq.clear();
	for (size_t i = 0; i < _pairs.size(); i++) {
		_deq.push_back(_pairs[i].second);
	}
}

void PmergeMe::insertSmallsDeq() {
	for (size_t i = 0; i < _pairs.size(); i++) {
		int 	small = _pairs[i].first;
		size_t	start = 0;
		size_t	end = _deq.size();
		while (start < end) {
			size_t middle = start + (end - start) / 2;
			if (small < _deq[middle])
				end = middle;
			else
				start = middle + 1;
		}
		_deq.insert(_deq.begin() + start, small);

	}
}

void PmergeMe::insertLeftoverDeq() {
	if (!_hasLeftover)
		return ;
	size_t	start = 0;
	size_t	end = _deq.size();
	while (start < end) {
		size_t middle = start + (end - start) / 2;
		if (_leftover < _deq[middle])
			end = middle;
		else
			start = middle + 1;
	}
	_deq.insert(_deq.begin() + start, _leftover);
}

// ============== Exception ==============

const char* PmergeMe::Error::what() const throw() {
	return ("\033[31;1m Error \033[0m");
}
