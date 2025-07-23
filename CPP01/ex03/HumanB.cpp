/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 00:05:31 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/23 19:00:29 by ddo-carm         ###   ########.fr       */
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
		std::cout << "\033[31;1m" << this->_name;
		std::cout << " attacks with their ";
		std::cout << this->_weapon->getType() << "\033[0m" << std::endl;
	}
	else
	{
		std::cout << "\033[32;1m" << this->_name;
		std::cout << " is not armed" << "\033[0m" << std::endl;
	}
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}
