/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:19:38 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/13 18:57:09 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie *horde;
	int		i = 0;

	if (N <= 0)
		return (NULL);
	horde = new Zombie[N];
	while (i < N)
	{
		horde[i].setName(name);
		i++;
	}
	return (horde);
}
