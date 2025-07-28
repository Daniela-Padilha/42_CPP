/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 13:19:39 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/28 18:43:45 by ddo-carm         ###   ########.fr       */
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

void Zombie::announce(void)
{
	std::cout << BGRN << this->_name << ": BraiiiiiiinnnzzzZ..."
		<< RES << std::endl;
}
