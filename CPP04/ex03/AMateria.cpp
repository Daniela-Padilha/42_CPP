/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:50:50 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/08/07 15:48:15 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/AMateria.hpp"

/*------------------------------Constructors---------------------------------*/

AMateria::AMateria(): _type("Not Set")
{
	std::cout << BGRN "AMateria default constructor called" RES << std::endl;
}

AMateria::AMateria(AMateria const &other): _type(other._type)
{
	std::cout << BGRN "AMateria copy constructor called" RES << std::endl;
}

AMateria::AMateria(std::string const &type): _type(type)
{
	std::cout << BGRN "AMateria type constructor called" RES << std::endl;
}

/*-------------------------------Destructors---------------------------------*/

AMateria::~AMateria()
{
	std::cout << BRED "AMateria destructor called" RES << std::endl;
}

/*------------------------------Operators------------------------------------*/

AMateria& AMateria::operator = (AMateria const &other)
{
	std::cout << BYEL "AMateria copy assignment operator called" RES << std::endl;
	if (this != &other)
		*this = other;
	return (*this);
}

/*-----------------------------Member Functions------------------------------*/

std::string const & AMateria::getType() const
{
	return(this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria: \"* does nothing to " << target.getName() << "*\"" << std::endl;
}
