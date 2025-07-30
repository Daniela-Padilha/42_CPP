/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 22:45:25 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/30 15:57:42 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << BGRN "DiamondTrap default constructor called" RES << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap()
{
	std::cout << BGRN "DiamondTrap name constructor called" RES << std::endl;
	_name = name;
	_hit = FragTrap::_hit;
	_energy = ScavTrap::_energy;
	_attack = FragTrap::_attack;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << BRED "DiamondTrap destructor called" RES << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& other) : ClapTrap(other), FragTrap(), ScavTrap()
{
	std::cout << BYEL "DiamondTrap copy constructor called" RES << std::endl;
	*this = other;
}

DiamondTrap& DiamondTrap::operator = (DiamondTrap& other)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit = other._hit;
		this->_energy = other._energy;
		this->_attack = other._attack;
	}
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << BMAG "\nI am " << this->_name;
	std::cout << " and my grandma is " << ClapTrap::_name << "!\n" RES << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);	
}
