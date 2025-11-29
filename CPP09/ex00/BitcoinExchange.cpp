/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:35:12 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/11/29 17:22:13 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {
	
}

BitcoinExchange::~BitcoinExchange() {
	
}

BitcoinExchange& BitcoinExchange::operator = (const BitcoinExchange &other) {
	
}

void BitcoinExchange::getData(std::ifstream &dataFile) {
	std::string *line;
	for (int i = 1; std::getline(dataFile, line[i], ','); i++) {
		if (i % 2 != 0)
			continue ;
		this->_data.insert(line[i - 1], line[i]);
	}
}

void btc(std::ifstream &file) {
	BitcoinExchange bitcoin;
	std::ifstream data("data.csv");
	
	if (!data.is_open()) {
		std::cout << "Error: could not open data.csv." << std::endl;
		return ;
	}
	std::cout << "Data opened!" << std::endl;
	bitcoin.getData(data);
	data.close();
	if (!parseInput(file))
		return ;
	// calculate();
}

bool parseInput (std::ifstream &file) {
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



// calculate () {
	
// }