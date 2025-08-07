/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:50:45 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/08/07 15:27:32 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Cure.hpp"

/*------------------------------Constructors---------------------------------*/

Cure::Cure(): _type("Not set")
{
	std::cout << BGRN "Cure default constructor called" RES << std::endl;
}

Cure::Cure(Cure const &other): _type(other._type)
{
	std::cout << BGRN "Cure copy constructor called" RES << std::endl;
}

/*-------------------------------Destructors---------------------------------*/

Cure::~Cure()
{
	std::cout << BRED "Cure destructor called" RES << std::endl;
}

/*------------------------------Operators------------------------------------*/

Cure& Cure::operator = (Cure const &other)
{
	std::cout << BYEL "Cure copy assignment operator called" RES << std::endl;
	if (this != &other)
		*this = other;
	return (*this);
}

/*-----------------------------Member Functions------------------------------*/

void Cure::setType(std::string& type)
{
	this->_type = type;
}

Cure* Cure::clone() const
{
	Cure *temp;

	temp = new Cure(*this);
	return (temp);
}

void Cure::use(ICharacter& target)
{
	std::cout << "Cure: \"* heals " << target.getName() << "'s wounds *\"" << std::endl;
}
