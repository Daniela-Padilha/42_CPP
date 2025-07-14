/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 13:19:39 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/13 18:32:46 by ddo-carm         ###   ########.fr       */
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
	std::cout << "\033[32;1m	" << getName() << " was destroyed"
		<< "\033[0m" << std::endl;
}

std::string	Zombie::getName(void)
{
	return (this->_name);
}

void Zombie::announce(void)
{
	std::cout << "\033[31;1m	" << this->_name << ": BraiiiiiiinnnzzzZ..."
		<< "\033[0m" << std::endl;
}
