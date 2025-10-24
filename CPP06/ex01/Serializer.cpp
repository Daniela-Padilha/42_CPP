/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:33:52 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/24 22:01:07 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Serializer.hpp"
#include <iostream>

/*------------------------------Constructors---------------------------------*/

Serializer::Serializer()
{
	std::cout << BGRN "Serializer was created\n" RES;
}

Serializer::Serializer(const Serializer& other)
{
	*this = other;
	std::cout << BYEL "Serializer copy constructor was called\n" RES;
}

/*-------------------------------Destructors---------------------------------*/

Serializer::~Serializer()
{
	std::cout << BRED "Serializer was destroyed\n" RES;
}

/*------------------------------Operators------------------------------------*/

Serializer& Serializer::operator = (const Serializer& other)
{
	std::cout << CYA "Serializer assignment operator was alled\n" RES;
	if (this != &other)
		*this = other;
	return (*this);
}

/*-----------------------------Member Functions------------------------------*/

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t newType = reinterpret_cast<uintptr_t>(ptr);
	return (newType);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data* newType = reinterpret_cast<Data*>(raw);
	return (newType);
}
