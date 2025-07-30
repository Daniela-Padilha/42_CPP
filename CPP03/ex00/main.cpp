/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:12:29 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/30 15:17:08 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ClapTrap.hpp"

int main()
{
	ClapTrap weapon("sword");

	std::cout << CYA "\n	-------First Oponent------" RES << std::endl;
	weapon.attack("stick");
	weapon.takeDamage(2);
	weapon.beRepaired(1);

	std::cout << CYA "\n	------Second Oponent------" RES << std::endl;
	weapon.attack("axe");
	weapon.takeDamage(10);
	weapon.attack("axe");
	weapon.beRepaired(6);
	weapon.attack("axe");

	std::cout << CYA "\n	-------Third Oponent------" RES << std::endl;
	for(int i = 0; i < 10; i++)
		weapon.attack("bomb");
	weapon.takeDamage(10);
	weapon.takeDamage(10);
	std::cout << std::endl;
	
	return (0);
}
