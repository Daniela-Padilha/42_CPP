/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:36:29 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/28 18:57:44 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Sed.hpp"

void sed(std::string filename, std::string s1, std::string s2);

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Try: <filename> <to_be_replaced> <to_replace>" << std::endl;
		return (1);
	}
	sed(av[1], av[2], av[3]);
	return (0);
}
