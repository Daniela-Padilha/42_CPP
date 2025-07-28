/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 21:10:18 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/28 19:04:47 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Harl.hpp"

int main(int ac, char **av)
{
	Harl	harl;

	if (ac != 2)
	{
		std::cout << "Try one of the following: ";
		std::cout << "DEBUG, INFO, WARNING, ERROR" << std::endl;
		return (1);
	}
	harl.filter(av[1]);
	return (0);
}
