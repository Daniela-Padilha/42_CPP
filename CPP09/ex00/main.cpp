/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 17:46:44 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/11/28 18:10:28 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return 1;
	}
	else {
		std::ifstream file(av[1]);
		if (!file.is_open()) {
			std::cout << "Error: could not open file." << std::endl;
			return 1;
		}
		btc(file);
		file.close();
	}
	return 0;
}