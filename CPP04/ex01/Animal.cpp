/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 23:54:04 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/07/27 16:09:11                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Animal.hpp"

/*------------------------------Constructors---------------------------------*/

Animal::Animal() : _type("Not set")
{
	std::cout << "Animal was created" << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << "Animal copy constructor was called" << std::endl;
	*this = other;
}

/*-------------------------------Destructors---------------------------------*/

Animal::~Animal()
{
	std::cout << "Animal ran away" << std::endl;
}

/*------------------------------Operators------------------------------------*/

Animal& Animal::operator = (const Animal& other)
{
	std::cout << "Animal copy assignment operator was called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

/*-----------------------------Member Functions------------------------------*/

void Animal::makeSound() const
{
	std::cout << "Silence" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}
