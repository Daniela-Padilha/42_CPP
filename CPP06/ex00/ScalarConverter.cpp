/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:22:52 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/24 18:17:53 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ScalarConverter.hpp"

/*------------------------------Constructors---------------------------------*/

ScalarConverter::ScalarConverter()
{
	std::cout << BGRN "Scalar Converter was created\n" RES;
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
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

ScalarConverter& ScalarConverter::operator = (const ScalarConverter& other)
{
	std::cout << CYA "Scalar Converter assignment operator was alled\n" RES;
	if (this != &other)
		*this = other;
	return (*this);
}

/*-----------------------------Helper Functions------------------------------*/

static int getType(const std::string& value)
{
	bool	valid;
	int		point;

	if (value == "nan" || value == "nanf" || value == "-inf" || value == "-inff"
		|| value == "+inf" || value == "+inff")
		return (PSEUDO);
	if (value.empty())
		return (CHAR);
	if (value.length() == 1 && !std::isdigit(value[0]) && std::isprint(value[0]))
		return (CHAR);
	if (value[value.length() - 1] == 'f' && value.find('.') != std::string::npos)
	{
		valid = true;
		point = 0;
		for (size_t i = 0; i < value.length() - 1; i++)
		{
			if (!std::isdigit(value[i]))
			{
				if (value[i] == '.' && std::isdigit(value[i + 1]))
					point++;
				else if ((value[i] == '-' || value[i] == '+') && i == 0)
					continue;
				else
					valid = false;
			}
		}
		if (valid && point == 1)
			return (FLOAT);
	}
	if (value.find('.') != std::string::npos)
	{
		valid = true;
		point = 0;
		for (size_t i = 0; i < value.length(); i++)
		{
			if (!std::isdigit(value[i]))
			{
				if (value[i] == '.' && std::isdigit(value[i + 1]))
					point++;
				else if ((value[i] == '-' || value[i] == '+') && i == 0)
					continue;
				else
					valid = false;
			}
		}
		if (valid && point == 1)
			return (DOUBLE);
	}
	valid = true;
	for (size_t i = 0; i < value.length(); i++)
	{
		if (!std::isdigit(value[i]))
		{
			if ((value[i] == '-' || value[i] == '+') && i == 0)
				continue;
			else
				valid = false;
		}
	}
	if (valid)
		return (INT);
	return (INVALID);
}

static void handleChar(const std::string& value)
{
	char c = value[0];

	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

static void handlePseudo(const std::string& value)
{
	double d = std::strtod(value.c_str(), NULL);

	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" <<std::endl;
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(d) << std::endl;
}

static void handleNum (const std::string& value)
{
	double d = std::strtod(value.c_str(), NULL);

	if (d < 0 || d > 127 )
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(static_cast<int>(d)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;

	if (d < static_cast<double>(INT_MIN) || d > static_cast<double>(INT_MAX))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;

	std::cout << "float: " << static_cast<float>(d);
	if (d == static_cast<int>(d))
		std::cout << ".0";
	std::cout << "f" << std::endl;

	std::cout << "double: " << static_cast<double>(d);
	if (d == static_cast<int>(d))
		std::cout << ".0";
	std::cout << std::endl;
}

/*-----------------------------Member Functions------------------------------*/

void ScalarConverter::convert(const std::string& value)
{
	int type = getType(value);

	switch (type) {
		case CHAR:
			handleChar(value);
			break;
		case INT:
		case FLOAT:
		case DOUBLE:
			handleNum(value);
			break;
		case PSEUDO:
			handlePseudo(value);
			break;
		case INVALID:
			std::cerr << BRED "Error: Invalid input\n" RES << std::endl;
			break;
	}
}
