/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 14:11:36 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/11/05 17:58:00                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/easyfind.hpp"
#include <vector>
#include <list>

int main () {
	std::cout << BMAG "-------Testing with Vector-------" RES << std::endl;
	std::vector<int> nbrs;
	for (int i = 0; i < 10; i++)
		nbrs.push_back(i);

	std::cout << CYA "\nCreating vector: " RES << std::endl;
	for (size_t i = 0; i < nbrs.size(); i++)
		std::cout << nbrs.at(i) << " ";
	std::cout << std::endl;

	std::cout << CYA "\nFind value: 6" RES << std::endl;
	try {
		::easyfind(nbrs, 6);
	} catch (std::exception& e) {
		std::cout << BRED << e.what() << RES << std::endl;
	}

	std::cout << CYA "\nFind value: 20" RES << std::endl;
	try {
		::easyfind(nbrs, 20);
	} catch (std::exception& e) {
		std::cout << BRED << e.what() << RES << std::endl;
	}

	std::cout << BMAG "-------Testing with List-------" RES << std::endl;
	std::list<int> myList;
	for (int i = 42; i < 50; i++ )
	{
		if (i % 2)
			myList.push_front(i);
		else
			myList.push_back(i);
	}

	std::cout << CYA "\nCreating list: " RES << std::endl;
	for (std::list<int>::iterator it = myList.begin(); it != myList.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << CYA "\nFind value: 42" RES << std::endl;
	try {
		::easyfind(myList, 42);
	} catch (std::exception& e) {
		std::cout << BRED << e.what() << RES << std::endl;
	}

	std::cout << CYA "\nFind value: 1" RES << std::endl;
	try {
		::easyfind(myList, 1);
	} catch (std::exception& e) {
		std::cout << BRED << e.what() << RES << std::endl;
	}

	std::cout << BMAG "-------Testing with const Vector-------" RES << std::endl;
	const std::vector<int> constNbrs = nbrs;

	std::cout << CYA "\nCreating vector: " RES << std::endl;
	for (size_t i = 0; i < constNbrs.size(); i++)
		std::cout << constNbrs.at(i) << " ";
	std::cout << std::endl;

	std::cout << CYA "\nFind value: 9" RES << std::endl;
	try {
		::easyfind(constNbrs, 9);
	} catch (std::exception& e) {
		std::cout << BRED << e.what() << RES << std::endl;
	}

	std::cout << CYA "\nFind value: 10" RES << std::endl;
	try {
		::easyfind(constNbrs, 10);
	} catch (std::exception& e) {
		std::cout << BRED << e.what() << RES << std::endl;
	}

	return 0;
}
