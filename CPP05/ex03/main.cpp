/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 18:27:22 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/21 21:09:08 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Bureaucrat.hpp"
#include "inc/PresidentialPardonForm.hpp"
#include "inc/RobotomyRequestForm.hpp"
#include "inc/ShrubberyCreationForm.hpp"

int main()
{
	srand(time(NULL));

	std::cout << BMAG "\n	Bureaucrat Creation\n" RES;
	Bureaucrat nor("Norris", 2);
	Bureaucrat rus("Russel", 40);
	Bureaucrat ant("Antonelli", 100);
	Bureaucrat lat("Latifi", 150);
	try {
		Bureaucrat person("person", 0);
	} catch (std::exception& error) {
		std::cout << error.what() << std::endl;
	}

	std::cout << BMAG "\n	Form Creation and << operator\n" RES;
	ShrubberyCreationForm shrub("shrub");
	std::cout << shrub << std::endl;
	RobotomyRequestForm robot("robot");
	std::cout << robot << std::endl;
	PresidentialPardonForm pardon("pardon");
	std::cout << robot << std::endl;

	std::cout << BMAG "	Polymorphism test\n" RES;
	AForm* form1 = new PresidentialPardonForm("pardon");
	std::cout << *form1 << std::endl;

	std::cout << BMAG "\n	Shrubbery Form Execution\n" RES;
	try {
		nor.executeForm(shrub);
	} catch (std::exception& error) {
		std::cout << error.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		nor.signForm(shrub);
		nor.executeForm(shrub);
	} catch (std::exception& error) {
		std::cout << error.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		lat.signForm(shrub);
		lat.executeForm(shrub);
	} catch (std::exception& error) {
		std::cout << error.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		ant.signForm(shrub);
		ant.executeForm(shrub);
	} catch (std::exception& error) {
		std::cout << error.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << BMAG "\n	Robotomy Form Execution\n" RES;
	for (int i = 0; i < 6; i++)
	{
		try {
			nor.signForm(robot);
			nor.executeForm(robot);
		} catch (std::exception& error) {
			std::cout << error.what() << std::endl;
		}
	}
	std::cout << std::endl;

	try {
		lat.signForm(robot);
		lat.executeForm(robot);
	} catch (std::exception& error) {
		std::cout << error.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		ant.signForm(robot);
		ant.executeForm(robot);
	} catch (std::exception& error) {
		std::cout << error.what() << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << BMAG "\n	Presidential Form Execution\n" RES;
	try {
		lat.signForm(pardon);
		lat.executeForm(pardon);
	} catch (std::exception& error) {
		std::cout << error.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		nor.signForm(pardon);
		nor.executeForm(pardon);
	} catch (std::exception& error) {
		std::cout << error.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		rus.signForm(pardon);
		rus.executeForm(pardon);
	} catch (std::exception& error) {
		std::cout << error.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << BMAG "\n	Destruction\n" RES;
	delete form1;
	return (0);
}
