/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 23:59:24 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/19 00:11:24 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog was created" << std::endl;
	_type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog ran away" << std::endl;
}

Dog::Dog(const Dog& other) : Animal()
{
	std::cout << "Dog copy constructor was called" << std::endl;
	*this = other;
}

Dog& Dog::operator = (const Dog& other)
{
	std::cout << "Dog copy assignment operator was called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof woof" << std::endl;
}
