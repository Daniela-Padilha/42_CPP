/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 18:27:22 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/19 00:37:01 by ddo-carm         ###   ########.fr       */
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

	std::cout << BMAG "\n	Sign Forms\n" RES;
	ham.signForm(ferrari);
	ham.signForm(redbull);
	ver.signForm(redbull);

	std::cout << BMAG "\n	Form Details Again\n" RES;
	std::cout << ferrari << std::endl;
	std::cout << redbull << std::endl;

	std::cout << BMAG "\n	Verstappen increment and sign form\n" RES;
	ver.increment();
	ver.signForm(redbull);
	std::cout << redbull << std::endl;

	std::cout << BMAG "\n	Out of Range Form Creation\n" RES;
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
