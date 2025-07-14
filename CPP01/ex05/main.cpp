/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 19:51:42 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/07/14 21:06:18                                           */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;

	if (ac != 2)
	{
		std::cout << "Wrong arg number" << std::endl;
		return (1);
	}
	harl.complain(av[1]);
	return (0);
}
