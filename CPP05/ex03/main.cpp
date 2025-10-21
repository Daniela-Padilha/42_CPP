/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 18:27:22 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/21 22:43:10 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Bureaucrat.hpp"
#include "inc/PresidentialPardonForm.hpp"
#include "inc/RobotomyRequestForm.hpp"
#include "inc/ShrubberyCreationForm.hpp"
#include "inc/Intern.hpp"

int main()
{
	srand(time(NULL));

	std::cout << BMAG "\n	Bureaucrat, Intern and Form Creation\n" RES;
	Bureaucrat nor("Norris", 1);
	Intern newIntern;
	AForm* form1;
	AForm* form2;
	AForm* form3;
	AForm* form4;

	std::cout << BMAG "\n	Intern Makes Forms\n" RES;
	try {
		form1 = newIntern.makeForm("weird name", "target");
	} catch (std::exception& error) {
		std::cout << error.what() << std::endl;
		form1 = NULL;
	}
	std::cout << std::endl;

	try {
		form2 = newIntern.makeForm("shrubbery creation", "shrub");
		nor.signForm(*form2);
		nor.executeForm(*form2);
	} catch (std::exception& error) {
		std::cout << error.what() << std::endl;
		form2 = NULL;
	}
	std::cout << std::endl;

	try {
		form3 = newIntern.makeForm("robotomy request", "robot");
		nor.signForm(*form3);
		nor.executeForm(*form3);
	} catch (std::exception& error) {
		std::cout << error.what() << std::endl;
		form3 = NULL;
	}
	std::cout << std::endl;

	try {
		form4 = newIntern.makeForm("presidential pardon", "pardon");
		nor.signForm(*form4);
		nor.executeForm(*form4);
	} catch (std::exception& error) {
		std::cout << error.what() << std::endl;
		form4 = NULL;
	}
	std::cout << std::endl;

	std::cout << BMAG "\n	Destruction\n" RES;
	if (form1) delete form1;
	if (form2) delete form2;
	if (form3) delete form3;
	if (form4) delete form4;
	return (0);
}
