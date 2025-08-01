/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 20:38:29 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/08/01 17:57:16                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << BGRN "ScavTrap default constructor called" RES << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << BGRN "ScavTrap name constructor called" RES << std::endl;
	_hit = 100;
	_energy = 50;
	_attack = 20;
	_maxhint = 100;
}

ScavTrap::~ScavTrap()
{
	std::cout << BRED "ScavTrap destructor called" RES << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << BYEL "ScavTrap copy constructor called" RES << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& other)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit = other._hit;
		this->_energy = other._energy;
		this->_attack = other._attack;
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energy != 0 && this->_hit != 0)
	{
		this->_energy--;
		std::cout << RED "ScavTrap " << this->_name;
		std::cout << " attacks " << target;
		std::cout << " causing " << this->_attack;
		std::cout << " points of damage!" RES << std::endl;
	}
	if (this->_hit == 0 && this->_energy == 0)
	{
		std::cout << "ScavTrap " << this->_name;
		std::cout << " could not attack, it is out of energy and health " << std::endl;
		return ;
	}
	if (this->_energy == 0)
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
	std::cout << BYEL "ScavTrap is now in Gate keeper mode " RES << std::endl;
}
