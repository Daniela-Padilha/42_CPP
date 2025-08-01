/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:12:29 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/08/01 16:06:49                                             */
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
	
	return (0);
}
