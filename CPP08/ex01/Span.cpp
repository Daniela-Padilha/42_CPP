/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:59:54 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/11/05 19:36:20                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Span.hpp"

/*------------------------------Constructors---------------------------------*/

Span::Span(): N(0)
{
	std::cout << BGRN "Span was created" RES << std::endl;
}

Span::Span(unsigned int nbr): N(nbr)
{
	std::cout << BGRN "Span was created with " << nbr << " elements" RES << std::endl;
}

Span::Span(const Span& other): N(other.N)
{
	std::cout << BYEL "	Copy constructor of Span was called" RES << std::endl;
	for (size_t i = 0; other.storage.size(); i++)
		this->storage[i] = other.storage[i];
}

/*-------------------------------Destructors---------------------------------*/

Span::~Span()
{
	std::cout << BRED "Span was destroyed" RES << std::endl;
}

/*------------------------------Operators------------------------------------*/

Span& Span::operator = (const Span& other)
{
	std::cout << BYEL "Assignment operator of Span was called" RES << std::endl;
	if (this != &other)
	{
		this->N = other.N;
		for (size_t i = 0; other.storage.size(); i++)
			this->storage[i] = other.storage[i];
	}
	return (*this);
}

/*-----------------------------Member Functions------------------------------*/

void Span::addNumber(int nbr)
{
	if (storage.size() < N)
	{
		storage.push_back(nbr);
		std::cout << CYA "The number " << nbr << " was added to Span" RES << std::endl;
	}
	else
		throw std::runtime_error("Error: Span is full, new number was not added.");
}

int Span::shortestSpan() const
{
	std::cout << "The shortest Span is ";
	if (storage.size() > 1)
	{
		int distance = INT_MAX;
		std::vector<int> sorted = storage;
		std::sort(sorted.begin(), sorted.end());
		for (size_t i = 0; i < sorted.size() - 1; i++)
		{
			if (sorted[i + 1] - sorted[i] < distance)
				distance = sorted[i + 1] - sorted[i];
		}
		return (distance);
	}
	else
		throw std::runtime_error("Error: not enough numbers to calculate span");
}

int Span::longestSpan() const
{
	std::cout << "The longest Span is ";
	if (storage.size() > 1)
	{
		int min = *std::min_element(storage.begin(), storage.end());
		int max = *std::max_element(storage.begin(), storage.end());
		return ((max - min));
	}
	else
		throw std::runtime_error("Error: not enough numbers to calculate span");
}
