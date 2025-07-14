/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 13:19:42 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/13 18:49:24 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Zombie.hpp"

Zombie* newZombie(std::string name);

void	randomChump(std::string name)
{
	Zombie *newzombie;
	
	newzombie = newZombie(name);
	newzombie->announce();
	delete(newzombie);
}
