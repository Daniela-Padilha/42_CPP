/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:15:38 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/21 22:04:54 by ddo-carm         ###   ########.fr       */
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
	int formId = -1;
	std::string form[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	
	for (int i = 0; i < 3; i++) {
		if (form[i] == formName) {
			formId = i;
			break;
		}
	}
	if (formId != -1)
		std::cout << "Intern creates " << formName << std::endl;

	switch (formId) {
		case 0:
			return (new ShrubberyCreationForm(formTarget));
		case 1:
			return (new RobotomyRequestForm(formTarget));
		case 2:
			return (new PresidentialPardonForm(formTarget));
		default:
			throw Intern::WrongForm();
	}
}

/*----------------------------Exception Classes------------------------------*/

const char* Intern::WrongForm::what() const throw(){
	return ("\033[31;1mError: Form name does not exist\033[0m");
}
