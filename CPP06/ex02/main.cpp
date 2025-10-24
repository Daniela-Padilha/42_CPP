/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:52:19 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/24 21:26:59 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main () {
	std::srand(std::time(0));

	std::cout << std::endl << BMAG "Generating objects" RES << std::endl;
	Base* random1 = generate();
	Base* random2 = generate();
	Base* random3 = generate();
	Base* random4 = generate();

	std::cout << std::endl << BMAG "Identity check using pointers: " RES << std::endl;
	identify(random1);
	identify(random2);
	identify(random3);
	identify(random4);

	std::cout << std::endl << BMAG "Identity check using references: " RES << std::endl;
	identify(*random1);
	identify(*random2);
	identify(*random3);
	identify(*random4);

	std::cout << std::endl << BMAG "Cleaning" RES << std::endl;
	delete (random1);
	delete (random2);
	delete (random3);
	delete (random4);
	return (0);
}
