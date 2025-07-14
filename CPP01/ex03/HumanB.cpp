/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 00:05:31 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/07/14 17:29:49                                           */
/*                                                                            */
/* ************************************************************************** */

#include "inc/HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::attack(void)
{
	if (_weapon)
	{
		std::cout << this->_name;
		std::cout << " attacks with their ";
		std::cout << this->_weapon->getType() << std::endl;
	}
	else
	{
		std::cout << this->_name;
		std::cout << " is not armed" << std::endl;
	}
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}
