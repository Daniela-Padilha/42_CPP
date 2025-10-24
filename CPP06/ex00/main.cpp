/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:21:15 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/24 16:26:36 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ScalarConverter.hpp"

int main (int ac, char **av) {
	if (ac != 2)
	{
		std::cout << BRED "Usage: ./convert <literal>\n" RES;
		return 1;
	}
	ScalarConverter::convert(av[1]);
	return (0);
}
