/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:30:28 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/21 17:50:22 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/RobotomyRequestForm.hpp"

/*------------------------------Constructors---------------------------------*/

RobotomyRequestForm::RobotomyRequestForm()
	:AForm("Undefined", 72, 45), _target("Undefined")
{
	std::cout << BGRN "A RobotomyRequest Form was created\n" RES;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	:AForm(target, 72, 45), _target(target)
{
	std::cout << BGRN "A RobotomyRequest Form with target <" << _target << "> was created\n" RES;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
	:AForm(other.getName(), other.getSignGrade(), other.getExecuteGrade()), _target(other._target)
{
	std::cout << BYEL "A RobotomyRequest Form copy constructor was called\n" RES;
}

/*-------------------------------Destructors---------------------------------*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << BRED "A RobotomyRequest Form was destroyed\n" RES;
}

/*------------------------------Operators------------------------------------*/

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& other)
{
  std::cout << CYA "RobotomyRequest Form copy assignment operator was called\n" RES;
  if (this != &other)
	this->_target = other._target;
	return (*this);
}

/*-----------------------------Member Functions------------------------------*/

std::string	RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void	RobotomyRequestForm::childExecute() const
{
	std::cout << "Brrrrrrr Brrrrrrrrrrrrr Brrrrrrrrrrrrrrrrrrrrrrrrrr\n";
	if (std::rand() % 2)
		std::cout << this->_target << " has been robotomized successfully\n";
	else
		std::cout << "Robotomy of " << this->_target << " failed.\n";
}
