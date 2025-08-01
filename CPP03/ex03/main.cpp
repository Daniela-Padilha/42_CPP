/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:12:29 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/08/01 18:00:38                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ClapTrap.hpp"
#include "inc/ScavTrap.hpp"
#include "inc/FragTrap.hpp"
#include "inc/DiamondTrap.hpp"

int main()
{
	ClapTrap weapon("sword");

std::cout << CYA "\n	-------First Oponent------" RES << std::endl;
	weapon.attack("stick");
	weapon.takeDamage(2);
	weapon.beRepaired(1);
	weapon.beRepaired(5);

	std::cout << CYA "\n	------Second Oponent------" RES << std::endl;
	weapon.attack("axe");
	weapon.takeDamage(9);
	weapon.attack("axe");
	weapon.beRepaired(6);
	weapon.beRepaired(6);
	weapon.beRepaired(1);
	weapon.attack("axe");

	std::cout << CYA "\n	-------Third Oponent------" RES << std::endl;
	for(int i = 0; i < 3; i++)
		weapon.attack("bomb");
	weapon.takeDamage(10);
	weapon.beRepaired(1);
	weapon.takeDamage(10);
	std::cout << std::endl;

	std::cout << CYA "\n	---------ScavTrap---------\n" RES << std::endl;
	ScavTrap robot("WALL-E");
	robot.takeDamage(30);
	robot.beRepaired(35);
	for (int i = 0; i < 49; i++)
		robot.attack("garbage");
	std::cout << std::endl;
	robot.guardGate();
	std::cout << std::endl;

	std::cout << CYA "\n	---------FragTrap---------" RES << std::endl;
	FragTrap frag("frag");
	frag.attack("Bad guy");
	frag.takeDamage(50);
	frag.beRepaired(20);
	frag.highFivesGuys();
	std::cout << std::endl;

	std::cout << CYA "	\n	--------DiamondTrap-------" RES << std::endl;
	DiamondTrap diamond("shiny_rock");
	diamond.attack("thieve");
	diamond.takeDamage(50);
	diamond.beRepaired(25);
	diamond.whoAmI();
	std::cout << std::endl;
	
	return (0);
}
