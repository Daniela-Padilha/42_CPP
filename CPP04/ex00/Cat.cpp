/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 23:59:21 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/07/27 16:11:33                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Cat.hpp"

/*------------------------------Constructors---------------------------------*/

Cat::Cat() : Animal()
{
	std::cout << BGRN "Cat was created" RES << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat& other) : Animal()
{
	std::cout << BYEL "Cat copy constructor was called" RES << std::endl;
	*this = other;
}

/*-------------------------------Destructors---------------------------------*/

Cat::~Cat()
{
	std::cout << BRED "Cat ran away" RES << std::endl;
}

/*------------------------------Operators------------------------------------*/

Cat& Cat::operator = (const Cat& other)
{
	std::cout << "Cat copy assignment operator was called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

/*-----------------------------Member Functions------------------------------*/

void Cat::makeSound() const
{
	std::cout << BMAG "Cat: Meowwww" RES << std::endl;
}
