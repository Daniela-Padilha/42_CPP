/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 23:54:04 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/19 00:08:25 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Animal.hpp"

Animal::Animal() : _type("Not set")
{
	std::cout << "Animal was created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal ran away" << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << "Animal copy constructor was called" << std::endl;
	*this = other;
}

Animal& Animal::operator = (const Animal& other)
{
	std::cout << "Animal copy assignment operator was called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Something rustles in the leaves" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}
