/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:15:38 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/21 21:32:22 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Intern.hpp"

/*------------------------------Constructors---------------------------------*/

Intern::Intern()
{
	std::cout << BGRN "An Intern was created\n" RES;
}

Intern::Intern(const Intern& other)
{
	*this = other;
	std::cout << BYEL "An Intern copy constructor was called\n" RES;
}

/*-------------------------------Destructors---------------------------------*/

Intern::~Intern()
{
  std::cout << BRED "An Intern was fired\n" RES;
}

/*------------------------------Operators------------------------------------*/

Intern& Intern::operator = (const Intern& other)
{
	std::cout << CYA "An Intern copy assignment operator was called\n" RES;
	if (this != &other)
		*this = other;
	return (*this); 
}

/*-----------------------------Member Functions------------------------------*/

AForm*	Intern::makeForm(std::string formName, std::string formTarget)
{

}
