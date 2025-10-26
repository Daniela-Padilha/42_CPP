/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 00:43:43 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/26 01:18:43 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Array.hpp"

int main () {

	std::cout << BMAG "----INT ARRAYS----" RES << std::endl;
	std::cout << CYA "\nCreating Arrays" RES << std::endl;
	std::cout << "Array1: ";
	Array<int> array1(10);
	std::cout << "Array2: ";
	Array<int> array2;
	std::cout << "Array3: ";
	Array<int> array3(0);
	std::cout << "Array2 = Array1: ";
	array2 = array1;

	std::cout << CYA "\nPrint Array 1" RES << std::endl;
	for (unsigned int i = 0; i < array1.size(); i++)
	{
		std::cout << array1[i] << std::endl;
	}

	std::cout << CYA "\nPrint Array 2" RES << std::endl;
	for (unsigned int i = 0; i < array2.size(); i++)
	{
		try {
			std::cout << array2[i] << std::endl;
		} catch (std::exception& error) {
			std::cout << error.what() << std::endl;
		}
	}

	std::cout << CYA "\nEditing Array 1" RES << std::endl;
	for (unsigned int i = 0; i < array1.size(); i++)
	{
		try {
			array1[i] += 42; 
			std::cout << array1[i] << std::endl;
		} catch (std::exception& error) {
			std::cout << error.what() << std::endl;
		}
	}

	std::cout << CYA "\nPrint Array 2 to check Assignment Operator" RES << std::endl;
	array2 = array1;
	for (unsigned int i = 0; i < array2.size(); i++)
	{
		try {
			std::cout << array2[i] << std::endl;
		} catch (std::exception& error) {
			std::cout << error.what() << std::endl;
		}
	}

	std::cout << CYA "\nDeep Copy check (changed array1 value)" RES << std::endl;
	array1[1] = 1;
	std::cout << "Value of [1] in Array1: " << array1[1] << std::endl;
	std::cout << "Value of [1] in Array2: " << array2[1] << std::endl;

	std::cout << BMAG "\n----STR ARRAYS----" RES << std::endl;
	std::cout << CYA "\nCreating Array" RES << std::endl;
	Array<std::string> arrayStr1(4);

	std::cout << CYA "\nEdit, Print and invalid index check" RES << std::endl;
	for (unsigned int i = 0; i <= arrayStr1.size(); i++)
	{
		try {
			arrayStr1[i] = "oi";
			std::cout << arrayStr1[i] << std::endl;
		} catch (std::exception& error) {
			std::cout << error.what() << std::endl;
		}
	}

	std::cout << CYA "\nDestructors" RES << std::endl;
	return (0);
}