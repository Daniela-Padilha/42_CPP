/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 00:05:39 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/07/14 17:16:04                                           */
/*                                                                            */
/* ************************************************************************** */

#include "inc/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
	: _name(name), _weapon(weapon)
{
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

void	HumanA::attack(void)
{
	std::cout << this->_name;
	std::cout << " attacks with their ";
	std::cout << this->_weapon.getType() << std::endl;
}
