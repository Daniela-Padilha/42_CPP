/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:50:35 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/08/07 15:27:36 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Ice.hpp"

/*------------------------------Constructors---------------------------------*/

Ice::Ice(): _type("Not set")
{
	std::cout << BGRN "Ice default constructor called" RES << std::endl;
}

Ice::Ice(Ice const &other): _type(other._type)
{
	std::cout << BGRN "Ice copy constructor called" RES << std::endl;
}

/*-------------------------------Destructors---------------------------------*/

Ice::~Ice()
{
	std::cout << BRED "Ice destructor called" RES << std::endl;
}

/*------------------------------Operators------------------------------------*/

Ice& Ice::operator = (Ice const &other)
{
	std::cout << BYEL "Ice copy assignment operator called" RES << std::endl;
	if (this != &other)
		*this = other;
	return (*this);
}

/*-----------------------------Member Functions------------------------------*/

void Ice::setType(std::string& type)
{
	this->_type = type;
}

Ice* Ice::clone() const
{
	Ice* temp;

	temp = new Ice(*this);
	return (temp);
}

void Ice::use(ICharacter& target)
{
	std::cout << "Ice: \"* shoots an ice bolt at " << target.getName() << " *\"" << std::endl;
}
