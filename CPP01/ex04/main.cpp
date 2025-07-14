/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:36:29 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/07/14 19:56:49                                           */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Sed.hpp"

void sed(std::string filename, std::string s1, std::string s2);

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Wrong number of args" << std::endl;
		return (1);
	}
	sed(av[1], av[2], av[3]);
	return (0);
}
