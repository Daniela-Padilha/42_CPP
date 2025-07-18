/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 23:59:21 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/19 00:10:31 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat was created" << std::endl;
	_type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat ran away" << std::endl;
}

Cat::Cat(const Cat& other) : Animal()
{
	std::cout << "Cat copy constructor was called" << std::endl;
	*this = other;
}

Cat& Cat::operator = (const Cat& other)
{
	std::cout << "Cat copy assignment operator was called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meowwww" << std::endl;
}
