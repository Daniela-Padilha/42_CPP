/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:19:35 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/28 18:51:55 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::Zombie(std::string newname)
{
	this->_name = newname;
}

Zombie::~Zombie(void)
{
	std::cout << BGRN << getName() << " was destroyed"
		<< RES << std::endl;
}

std::string	Zombie::getName(void)
{
	return (this->_name);
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void Zombie::announce(void)
{
	std::cout << BRED << this->_name << ": BraiiiiiiinnnzzzZ..."
		<< RES << std::endl;
}
