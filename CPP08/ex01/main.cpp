/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:59:08 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/11/05 19:12:39                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Span.hpp"

int main()
{
	std::cout << BMAG "------Subject Test------" RES << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << BMAG "\n------My Test------" RES << std::endl;
	std::cout << BMAG "\nSpan with 1 element: " RES << std::endl;
	{
		Span mySp(1);
		try {
			std::cout << mySp.shortestSpan() << std::endl;
		} catch (std::exception& e) {
			std::cout << BRED << e.what() << RES << std::endl;
		}
		try {
			std::cout << mySp.longestSpan() << std::endl;
		} catch (std::exception& e) {
			std::cout << BRED << e.what() << RES << std::endl;
		}
	}

	std::cout << BMAG "\nAdding too many nbrs:  " RES << std::endl;
	{
		Span mySp(3);
		try {
			mySp.addNumber(42);
			mySp.addNumber(6);
			mySp.addNumber(11);
			mySp.addNumber(2);
		} catch (std::exception& e) {
			std::cout << BRED << e.what() << RES << std::endl;
		}
	}

	// std::cout << BMAG "\nTesting with 10,000 numbers:  " RES << std::endl;
	// Span mySp = Span(11000);
	// for (size_t i = 0; i < 11000; i++)
	// 	mySp.addNumber(i);
	// std::cout << mySp.shortestSpan() << std::endl;
	// std::cout << mySp.longestSpan() << std::endl;

	return 0;
}
