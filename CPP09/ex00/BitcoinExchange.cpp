/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:35:12 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/11/28 19:31:40 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void btc(std::ifstream &file) {
	if (!parse_input(file))
		return ;
	std::ifstream data("data.csv");
	if (!data.is_open()) {
		std::cout << "Error: could not open data.csv." << std::endl;
		return ;
	}
	std::cout << "Data opened!" << std::endl;
	// get_data();
	data.close();
	// calculate();
}

bool parse_input (std::ifstream &file) {
	std::string line;
	std::string value;
	std::getline(file, line);
	if (line.compare("date | value") != 0) {
		std::cout << "Error: bad input" << std::endl;
		return false;
	}
	while (std::getline(file, value, '|')) {
		 
				
	}
	std::cout << "Good job!" << std::endl;
	return true;
}

// get_data() {
	
// }

// calculate () {
	
// }