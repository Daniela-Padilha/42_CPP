/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 18:27:22 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/09/29 19:37:50 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Bureaucrat.hpp"

int main()
{
	std::cout << BMAG "		Creation\n" RES;
	Bureaucrat ham("Hamilton", 4);
	Bureaucrat ver("Verstappen", 2);
	
	std::cout << BMAG "\n		Using << operator\n" RES;
	std::cout << ham << std::endl;
	std::cout << ver << std::endl;
	
	std::cout << BMAG "\n		Increment\n" RES;
	try {
		ver.increment();
	} catch (std::exception &error) {
		std::cout << error.what() << std::endl;
	}
	
	std::cout << BMAG "\n		Decrement\n" RES;
	try {
		ham.decrement();
	} catch (std::exception &error) {
		std::cout << error.what() << std::endl;
	}

	std::cout << BMAG "\n		Checking throw\n" RES;
	
	std::cout << BMAG "\n		Destruction\n" RES;
	return (0);
	}