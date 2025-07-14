/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 21:10:18 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/07/14 23:05:02                                           */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Harl.hpp"

int main(int ac, char **av)
{
	Harl	harl;

	if (ac != 2)
	{
		std::cout << "Wrong arg number" << std::endl;
		return (1);
	}
	harl.filter(av[1]);
	return (0);
}
