/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 18:27:22 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/22 14:27:29 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Bureaucrat.hpp"
#include "inc/Form.hpp"

int main()
{
	std::cout << BMAG "\n	Bureaucrat Creation\n" RES;
	Bureaucrat ham("Hamilton", 4);
	Bureaucrat ver("Verstappen", 2);

	std::cout << BMAG "\n	Form Creation\n" RES;
	Form ferrari("Ferrari", 4, 4);
	Form redbull("RedBull", 1, 1);

	std::cout << BMAG "\n	Form Details\n" RES;
	std::cout << ferrari << std::endl;
	std::cout << redbull << std::endl;

	std::cout << BMAG "	Sign Forms\n" RES;
	ham.signForm(ferrari);
	ham.signForm(ferrari);
	ham.signForm(redbull);
	ver.signForm(redbull);

	std::cout << BMAG "\n	Form Details Again\n" RES;
	std::cout << ferrari << std::endl;
	std::cout << redbull << std::endl;

	std::cout << BMAG "	Verstappen increment and sign form\n" RES;
	ver.increment();
	ver.signForm(redbull);
	std::cout << redbull << std::endl;

	std::cout << BMAG "	Out of Range Form Creation\n" RES;
	try {
		Form haas("Haas", 200, 200);
	} catch (std::exception& error) {
		std::cout << error.what() << std::endl;
	}
	try {
		Form williams("Williams", -1, -1);
	} catch (std::exception& error) {
		std::cout << error.what() << std::endl;
	}

	std::cout << BMAG "\n	Destruction\n" RES;
	return (0);
}
