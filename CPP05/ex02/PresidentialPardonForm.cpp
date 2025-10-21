/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:00:06 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/21 17:37:56 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/PresidentialPardonForm.hpp"

/*------------------------------Constructors---------------------------------*/

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("Undefined", 25, 5), _target("Undefined")
{
	std::cout << BGRN "A Presidential Pardon Form was created\n" RES;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm(target, 25, 5), _target(target)
{
	std::cout << BGRN "A Presidential Pardon Form with target <" << _target << "> was created\n" RES;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
	: AForm(other.getName(), other.getSignGrade(), other.getExecuteGrade()), _target(other._target)
{
	std::cout << BYEL "A Presidential Pardon Form copy constructor was called\n" RES;
}

/*-------------------------------Destructors---------------------------------*/

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << BRED "A Presidential Pardon Form was destroyed\n" RES;
}

/*------------------------------Operators------------------------------------*/

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& other)
{
  std::cout << CYA "Presidential Pardon Form copy assignment operator was called\n" RES;
	if (this != &other)
		this->_target = other._target;
	return (*this);
}

/*-----------------------------Member Functions------------------------------*/

std::string	PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void	PresidentialPardonForm::childExecute() const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox\n";
}
