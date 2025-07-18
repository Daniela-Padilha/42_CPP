/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:12:29 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/18 20:35:25 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ClapTrap.hpp"

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
	
	return (0);
}
