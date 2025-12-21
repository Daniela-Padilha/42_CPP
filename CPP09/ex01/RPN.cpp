/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 19:33:33 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/12/21 00:29:06                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &other): _nbrs(other._nbrs) {}

RPN::~RPN() {}

RPN& RPN::operator=(const RPN &other) {
	if (this != &other)
		this->_nbrs = other._nbrs;
	return *this;
}

void RPN::parse(const std::string& s) {
    std::istringstream	iss(s);
    std::string			token;

	while (!_nbrs.empty())
		_nbrs.pop();

    while (iss >> token) { //reads until whitespace
        if (isNumber(token))
			_nbrs.push(token[0] - '0');
        else if (isSign(token)) {
			if (_nbrs.size() < 2)
				throw RPN::Error();
			solve(token[0]);
		}
		else
			throw RPN::Error();
    }
	if (_nbrs.size() != 1)
		throw RPN::Error();
	else
		std::cout << _nbrs.top() << std::endl;
}

bool RPN::isNumber(const std::string& s) {
	if (s.length() == 1 && std::isdigit(s[0]))
		return true;
	else
		return false;
}

bool RPN::isSign(const std::string& s) {
	std::string signs = "+-/*";

	if (s.length() == 1 && signs.find(s[0]) != std::string::npos)
		return true;
	else
		return false;
}

void RPN::solve(char sign) {
	int res;
	int last = _nbrs.top();
	_nbrs.pop();
	int first = _nbrs.top();
	_nbrs.pop();

	switch (sign)
	{
	case '+':
		res = first + last;
		break;
	case '-':
		res = first - last;
		break;
	case '*':
		res = first * last;
		break;
	case '/':
		if (last == 0)
			throw RPN::Error();
		res = first / last;
		break;
	default:
		throw RPN::Error();
	}

	_nbrs.push(res);
}

const char* RPN::Error::what() const throw() {
	return ("\033[31;1m Error \033[0m");
}