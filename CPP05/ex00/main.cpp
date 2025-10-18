/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 18:27:22 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/18 16:32:42 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Bureaucrat.hpp"

int main()
{
	std::cout << BMAG "\n	Creation with valid grades\n" RES;
	try {
		Bureaucrat ham("Hamilton", 4);
	} catch (std::exception &error) {
		std::cout << error.what() << std::endl;
	}
	try {
		Bureaucrat ver("Verstappen", 2);
	} catch (std::exception &error) {
		std::cout << error.what() << std::endl;
	}

	std::cout << BMAG "\n	Creation with invalid grades\n" RES;
	std::cout << "Creating Latifi with grade 200\n";
	try {
		Bureaucrat lat("Latifi", 200);
	} catch (std::exception &error) {
		std::cout << error.what() << std::endl;
	}

	std::cout << "\nCreating Alonso with grade 0\n";
	try {
		Bureaucrat alo("Alonso", 0);
	} catch (std::exception &error) {
		std::cout << error.what() << std::endl;
	}

	std::cout << "\n	 ------------------------" << std::endl; 
	std::cout << BMAG "\n	New Creation for more tests\n" RES;
	Bureaucrat nor("Norris", 2);
	Bureaucrat lec("Leclerc", 149);
	
	std::cout << BMAG "\n	Using insertion operator\n" RES;
	std::cout << nor << std::endl;
	std::cout << lec << std::endl;
	
	std::cout << BMAG "\n	Increment inside range\n" RES;
	try {
		nor.increment();
	} catch (std::exception &error) {
		std::cout << error.what() << std::endl;
	}
	
	std::cout << BMAG "\n	Decrement inside range\n" RES;
	try {
		lec.decrement();
	} catch (std::exception &error) {
		std::cout << error.what() << std::endl;
	}

	std::cout << BMAG "\n	Increment outside range\n" RES;
	std::cout << "Incrementing Norris again\n";
	try {
		nor.increment();
	} catch (std::exception &error) {
		std::cout << error.what() << std::endl;
	}
	
	std::cout << BMAG "\n	Decrement outside range\n" RES;
	std::cout << "Decrementing Leclerc again\n";
	try {
		lec.decrement();
	} catch (std::exception &error) {
		std::cout << error.what() << std::endl;
	}
	
	std::cout << BMAG "\n	Destruction\n" RES;
	return (0);
	}