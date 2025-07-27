/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 12:38:01 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/07/27 16:23:23                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/WrongAnimal.hpp"

/*------------------------------Constructors---------------------------------*/

WrongAnimal::WrongAnimal() : _type("Not set")
{
	std::cout << "Wrong Animal was created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "Wrong Animal copy constructor was called" << std::endl;
	*this = other;
}

/*-------------------------------Destructors---------------------------------*/

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal ran away" << std::endl;
}

/*------------------------------Operators------------------------------------*/

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& other)
{
	std::cout << "Wrong Animal copy assignment operator was called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

/*-----------------------------Member Functions------------------------------*/

void WrongAnimal::makeSound() const
{
	std::cout << "Silence" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}
