/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:22:52 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/23 18:33:20 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ScalarConverter.hpp"

/*------------------------------Constructors---------------------------------*/

ScalarConverter::ScalarConverter()
{
	std::cout << BGRN "Scalar Converter was created\n" RES;
}

ScalarConverter::ScalarConverter(ScalarConverter& const other)
{
	*this = other;
	std::cout << BYEL "Scalar Converter copy constructor was called\n" RES;
}

/*-------------------------------Destructors---------------------------------*/

ScalarConverter::~ScalarConverter()
{
	std::cout << BRED "Scalar Converter was destroyed\n" RES;
}

/*------------------------------Operators------------------------------------*/

ScalarConverter& ScalarConverter::operator = (ScalarConverter& const other)
{
	std::cout << CYA "Scalar Converter assignment operator was alled\n" RES;
	if (this != &other)
		*this = other;
	return (*this);
}

/*-----------------------------Member Functions------------------------------*/

void ScalarConverter::convert(const std::string& value)
{
	
}