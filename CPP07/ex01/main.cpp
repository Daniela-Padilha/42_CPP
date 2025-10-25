/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:30:44 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/25 23:32:36 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/iter.hpp"
#include <string>

static void add (int& nbr)
{
	nbr++;
}

static void capitalizeStr (std::string& str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (std::islower(str[i]))
			str[i] -= 32;
	}
}

static void capitalizeChar (char& letter)
{
	letter -= 32;
}

int main()
{
	int 		intArr[] = {1, 2, 3, 4, 5, 6};
	const int	cIntArr[] = {1, 2, 3};
	char 		charArr[] = {'a', 'b', 'c'};
	std::string	strArr[] = {"one", "two", "three", "four"};

	std::cout << BYEL "\n----TESTS----" RES << std::endl << std::endl;
	std::cout << CYA "Invalid Pointer: " RES << std::endl;
	::iter((int *)NULL, 1, add);

	std::cout << CYA "\nInvalid Size: " RES << std::endl;
	::iter(intArr, -1, add);
	
	std::cout << CYA "\nIncrement Non-Const Int Array: " RES << std::endl;
	std::cout << BMAG "Before Incrementing:" RES << std::endl;
	::iter(intArr, 6, print);

	::iter(intArr, 6, add);
	std::cout << BMAG "\nAfter Incrementing:" RES << std::endl;
	::iter(intArr, 6, print);

	std::cout << CYA "\nCapitalize Str Array: " RES << std::endl;
	std::cout << BMAG "Before Capitalizing:" RES <<std::endl;
	::iter(strArr, 4, print);

	::iter(strArr, 4, capitalizeStr);
	std::cout << BMAG "\nAfter Capitalizing:" RES <<std::endl;
	::iter(strArr, 4, print);

	std::cout << CYA "\nCapitalize Char Array: " RES << std::endl;
	std::cout << BMAG "Before Capitalizing:" << RES <<std::endl;
	::iter(charArr, 3, print);

	::iter(charArr, 3, capitalizeChar);
	std::cout << BMAG "\nAfter Capitalizing:" << RES <<std::endl;
	::iter(charArr, 3, print);

	std::cout << CYA "\nPrinting Const Int Array: " RES << std::endl;
	::iter(cIntArr, 3, print);

	return (0);
}
