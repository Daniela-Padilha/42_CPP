/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 13:19:44 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/13 16:59:22 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Zombie.hpp"

//allocates memory for a new object of class zombie

Zombie* newZombie(std::string name)
{
	Zombie* newzombie;
	
	newzombie = new Zombie(name);
	return (newzombie);
}
