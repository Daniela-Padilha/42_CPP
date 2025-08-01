/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 21:46:52 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/08/01 17:57:09                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << BGRN "FragTrap default constructor called" RES << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	std::cout << BGRN "FragTrap name constructor called" RES << std::endl;
	_hit = 100;
	_energy = 100;
	_attack = 30;
	_maxhint = 100;
}

FragTrap::~FragTrap()
{
	std::cout << BRED "FragTrap destructor called" RES << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << BYEL "FragTrap copy constructor called" RES << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator = (const FragTrap& other)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit = other._hit;
		this->_energy = other._energy;
		this->_attack = other._attack;
	}
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << BMAG "\nFragTrap " << _name << " is asking for a high five!!\n" RES << std::endl;
}