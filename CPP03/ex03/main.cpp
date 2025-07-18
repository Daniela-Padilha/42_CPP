/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:12:29 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/18 23:37:12 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ClapTrap.hpp"
#include "inc/ScavTrap.hpp"
#include "inc/FragTrap.hpp"
#include "inc/DiamondTrap.hpp"

int main()
{
	ClapTrap weapon("sword");

	std::cout << "\n\033[31;1m-------First Oponent------\033[0m\n" << std::endl;
	weapon.attack("stick");
	weapon.takeDamage(2);
	weapon.beRepaired(1);

	std::cout << "\n\033[31;1m------Second Oponent------\033[0m\n" << std::endl;
	weapon.attack("axe");
	weapon.takeDamage(10);
	weapon.attack("axe");
	weapon.beRepaired(6);
	weapon.attack("axe");

	std::cout << "\n\033[31;1m-------Third Oponent------\033[0m\n" << std::endl;
	for(int i = 0; i < 10; i++)
		weapon.attack("bomb");
	weapon.takeDamage(10);
	weapon.takeDamage(10);

	std::cout << "\n\033[31;1m---------ScavTrap---------\033[0m\n" << std::endl;
	ScavTrap robot("WALL-E");
	robot.attack("garbage");
	robot.takeDamage(15);
	robot.beRepaired(10);
	robot.guardGate();

	std::cout << "\n\033[31;1m---------FragTrap---------\033[0m\n" << std::endl;
	FragTrap frag("frag");
	frag.attack("Bad guy");
	frag.takeDamage(40);
	frag.beRepaired(20);
	frag.highFivesGuys();

	std::cout << "\n\033[31;1m--------DiamondTrap-------\033[0m\n" << std::endl;
	DiamondTrap diamond("diamond");
	diamond.attack("thieve");
	diamond.takeDamage(50);
	diamond.beRepaired(25);
	diamond.whoAmI();
	
	return (0);
}
