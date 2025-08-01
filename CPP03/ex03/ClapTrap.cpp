/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:09:52 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/08/01 15:26:25                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ClapTrap.hpp"

/*------------------------------Constructors---------------------------------*/

ClapTrap::ClapTrap() : _name("Not set"), _hit(10), _energy(10), _attack(0)
{
	std::cout << BGRN "ClapTrap default constructor called" RES << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _hit(10), _energy(10), _attack(0)
{
	std::cout << BGRN "ClapTrap name constructor called" RES << std::endl;
	this->_name = name;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << BYEL "ClapTrap copy constructor called" RES << std::endl;
	*this = other;
}

/*-------------------------------Destructors---------------------------------*/

ClapTrap::~ClapTrap()
{
	std::cout << BRED "ClapTrap destructor called" RES << std::endl;
}

/*------------------------------Operators------------------------------------*/

ClapTrap& ClapTrap::operator = (const ClapTrap& other)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit = other._hit;
		this->_energy = other._energy;
		this->_attack = other._attack;
	}
	return (*this);
}

/*-----------------------------Member Functions------------------------------*/

void ClapTrap::attack(const std::string& target)
{
	if (this->_energy != 0 && this->_hit != 0)
	{
		this->_energy--;
		std::cout << BRED "ClapTrap " << this->_name;
		std::cout << " attacks " << target;
		std::cout << " causing " << this->_attack;
		std::cout << " points of damage!" RES << std::endl;
		return ;
	}
	else if (this->_energy == 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " could not attack, it is out of energy " << std::endl;
	}
	else if (this->_hit == 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " could not attack, needs repairing " << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit == 0)
		std::cout << "ClapTrap " << this->_name << " is already dead, stop it!!!" << std::endl;
	else if (amount >= this->_hit)
	{
		this->_hit = 0;
		std::cout << BRED "ClapTrap " << this->_name;
		std::cout << " was attacked and took " << amount;
		std::cout << " of damage. Current health is " << this->_hit << RES << std::endl;
	}
	else
	{
		this->_hit -= amount;
		std::cout << BRED "ClapTrap " << this->_name;
		std::cout << " was attacked and took " << amount;
		std::cout << " of damage. Current health is " << this->_hit << RES << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit + amount >= 10)
	{
		std::cout << GRN "ClapTrap " << this->_name;
		std::cout << " is already at full health " RES << std::endl;
		return ;
	}
	if (this->_energy != 0 || this->_hit != 0)
	{
		this->_energy--;
		this->_hit += amount;
		std::cout << GRN "ClapTrap " << this->_name;
		std::cout << " repaired itself with " << amount;
		std::cout << " points. Current health is " << this->_hit << RES << std::endl;
	}
}
