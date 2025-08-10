/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:50:45 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/08/10 17:14:29 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Cure.hpp"

/*------------------------------Constructors---------------------------------*/

Cure::Cure(): AMateria("Cure")
{
	std::cout << BGRN "Cure default constructor called" RES << std::endl;
}

Cure::Cure(Cure const &other): AMateria(other)
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
		AMateria::operator=(other);
	return (*this);
}

/*-----------------------------Member Functions------------------------------*/

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
