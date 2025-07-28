/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 19:51:42 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/28 19:03:59 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;

	if (ac != 2)
	{
		std::cout << "Try one of the following: ";
		std::cout << "DEBUG, INFO, WARNING, ERROR" << std::endl;
		return (1);
	}
	harl.complain(av[1]);
	return (0);
}
