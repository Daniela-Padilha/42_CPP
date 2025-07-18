/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:09:52 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/18 21:35:00 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ClapTrap.hpp"

/*------------------------------Constructors---------------------------------*/

ClapTrap::ClapTrap() : _hit(10), _energy(10), _attack(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->_name = "Not set";
}

ClapTrap::ClapTrap(const std::string name) : _hit(10), _energy(10), _attack(0)
{
	std::cout << "ClapTrap name constructor called" << std::endl;
	this->_name = name;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = other;
}

/*-------------------------------Destructors---------------------------------*/

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
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
		std::cout << "ClapTrap " << this->_name;
		std::cout << " attacks " << target;
		std::cout << " causing " << this->_attack;
		std::cout << " points of damage!" << std::endl;
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
		std::cout << "ClapTrap " << this->_name;
		std::cout << " was attacked and took " << amount;
		std::cout << " of damage. Current health is " << this->_hit << std::endl;
	}
	else
	{
		this->_hit -= amount;
		std::cout << "ClapTrap " << this->_name;
		std::cout << " was attacked and took " << amount;
		std::cout << " of damage. Current health is " << this->_hit << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy != 0 || this->_hit != 0)
	{
		this->_energy--;
		this->_hit += amount;
		std::cout << "ClapTrap " << this->_name;
		std::cout << " repaired itself with " << amount;
		std::cout << " points. Current health is " << this->_hit << std::endl;
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
