/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 20:38:29 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/18 21:31:04 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	_hit = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energy != 0 && this->_hit != 0)
	{
		this->_energy--;
		std::cout << "ScavTrap " << this->_name;
		std::cout << " attacks " << target;
		std::cout << " causing " << this->_attack;
		std::cout << " points of damage!" << std::endl;
		return ;
	}
	else if (this->_energy == 0)
	{
		std::cout << "ScavTrap " << this->_name;
		std::cout << " could not attack, it is out of energy " << std::endl;
	}
	else if (this->_hit == 0)
	{
		std::cout << "ScavTrap " << this->_name;
		std::cout << " could not attack, needs repairing " << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode " << std::endl;
}
