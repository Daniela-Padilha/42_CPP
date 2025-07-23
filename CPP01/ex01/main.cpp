/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:19:33 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/23 18:54:20 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);
int	arg_check(int ac, char **av);

int	main(int ac, char **av)
{
	int i = 0;
	Zombie *horde;
	
	if (!arg_check(ac, av))
		return (0);
	horde = zombieHorde(atoi(av[1]), "Brian");
	std::cout << "\033[31;1m 	FOR THE HORDE \033[0m" << std::endl;
	while (i < atoi(av[1]))
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
	return (0);
}

int	arg_check(int ac, char **av)
{
	int i = 0;
	
	if (ac != 2)
	{
		std::cerr << "Please give the number of zombies you wish to create" << std::endl;
		return (0);
	}
	while (av[1][i])
	{
		if (!isdigit(av[1][i]) || atoi(av[1]) > 100 || atoi(av[1]) <= 0)
		{
			std::cerr << "Arg is not numeric or too big" << std::endl;
			return (0);
		}
		i++;
	}
	return (1);
}
