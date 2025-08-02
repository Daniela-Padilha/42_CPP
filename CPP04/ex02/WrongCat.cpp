/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 12:38:03 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/07/27 16:31:03                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/WrongCat.hpp"

/*------------------------------Constructors---------------------------------*/

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << BGRN "Wrong  Cat was created" RES << std::endl;
	_type = "Wrong Cat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal()
{
	std::cout << BYEL "Wrong Cat copy constructor was called" RES << std::endl;
	*this = other;
}

/*-------------------------------Destructors---------------------------------*/

WrongCat::~WrongCat()
{
	std::cout << BRED "Wrong Cat ran away" RES << std::endl;
}

/*------------------------------Operators------------------------------------*/

WrongCat& WrongCat::operator = (const WrongCat& other)
{
	std::cout << "Wrong Cat copy assignment operator was called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

/*-----------------------------Member Functions------------------------------*/

void WrongCat::makeSound() const
{
	std::cout << BMAG "Wrong Cat: Meowwww" RES << std::endl;
}
