/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 23:59:24 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/08/02 19:34:26                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Dog.hpp"

/*------------------------------Constructors---------------------------------*/

Dog::Dog() : Animal()
{
	std::cout << BGRN "Dog was created" RES << std::endl;
	_type = "Dog";
	_brain = new Brain;
}

Dog::Dog(const Dog& other) : Animal()
{
	std::cout << BYEL"Dog copy constructor was called" RES << std::endl;
	this->_type = other._type;
	this->_brain = new Brain (*other._brain);
}

/*-------------------------------Destructors---------------------------------*/

Dog::~Dog()
{
	delete(_brain);
	std::cout << BRED "Dog ran away" RES << std::endl;
}

/*------------------------------Operators------------------------------------*/

Dog& Dog::operator = (const Dog& other)
{
	std::cout << "Dog copy assignment operator was called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
		delete (this->_brain);
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

/*-----------------------------Member Functions------------------------------*/

void Dog::makeSound() const
{
	std::cout << BMAG "Dog: Woof woof" RES << std::endl;
}

Brain* Dog::getBrain() const
{
	return (_brain);
}
