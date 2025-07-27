/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 23:59:24 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/07/27 17:10:24                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Dog.hpp"

/*------------------------------Constructors---------------------------------*/

Dog::Dog() : Animal()
{
	std::cout << "Dog was created" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal()
{
	std::cout << "Dog copy constructor was called" << std::endl;
	*this = other;
}

/*-------------------------------Destructors---------------------------------*/

Dog::~Dog()
{
	std::cout << "Dog ran away" << std::endl;
	delete (_brain);
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
	std::cout << "Dog: Woof woof" << std::endl;
}
