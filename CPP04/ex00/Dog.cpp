/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 23:59:24 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/07/27 16:11:28                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Dog.hpp"

/*------------------------------Constructors---------------------------------*/

Dog::Dog() : Animal()
{
	std::cout << BGRN "Dog was created" RES << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog& other) : Animal()
{
	std::cout << BYEL"Dog copy constructor was called" RES << std::endl;
	*this = other;
}

/*-------------------------------Destructors---------------------------------*/

Dog::~Dog()
{
	std::cout << BRED "Dog ran away" RES << std::endl;
}

/*------------------------------Operators------------------------------------*/

Dog& Dog::operator = (const Dog& other)
{
	std::cout << "Dog copy assignment operator was called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

/*-----------------------------Member Functions------------------------------*/

void Dog::makeSound() const
{
	std::cout << BMAG "Dog: Woof woof" RES << std::endl;
}
