/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:01:06 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/08/04 20:36:08                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Cure.hpp"

/*------------------------------Constructors---------------------------------*/

Cure::Cure()
{
	std::cout << BGRN "Cure constructor called" RES << std::endl;
}

Cure::Cure(Cure& const other)
{
	std::cout << BGRN "Cure copy constructor called" RES << std::endl;
	*this = other;
}

/*-------------------------------Destructors---------------------------------*/

Cure::~Cure()
{
	std::cout << BRED "Cure destructor called" RES << std::endl;
}

/*------------------------------Operators------------------------------------*/

Cure& Cure::operator = (Cure& const other)
{
	std::cout << BYEL "Cure copy assignment operator called" RES << std::endl;
	if (this != &other)
		*this = other;
}

/*-----------------------------Member Functions------------------------------*/

void Cure::setType(std::string& type)
{
	this->_type = type;
}

Cure* Cure::clone() const
{
	Cure *temp;

	*temp = this;
	return (temp);
}

void Cure::use(ICharacter& target)
{
	std::cout << "Cure: \"* heals " << target.getName() << "'s wounds *\"" << std::endl;
}
