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

BitcoinExchange::BitcoinExchange(std::ifstream &dataFile) {
	std::string line;
	std::getline(dataFile, line);
	while (std::getline(dataFile, line)) {
		size_t position = line.find(',');
		if (position != std::string::npos) {
			std::string date = line.substr(0, position);
			int			val = std::atoi(line.substr(position + 1).c_str());
			this->_data.insert(std::make_pair(date, val));
		}
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other): _data(other._data) {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange& BitcoinExchange::operator = (const BitcoinExchange &other) {
	if (this != &other) {
		this->_data = other._data;
	}
	return *this;
}

void parseInput (std::ifstream &file) {
	std::string line;
	std::getline(file, line);
	if (line.compare("date | value") != 0) {
		std::cout << "Error: bad input" << std::endl;
	}
	while (std::getline(file, line)) {
		size_t pos = line.find('|');
		if (pos != std::string::npos) {
			int			val = std::atoi(line.substr(pos + 2).c_str());
			if (val < 0)
				std::cout << "Error: not a positive number." << std::endl;
			else if (val > 1000)
				std::cout << "Error: too large a number." << std::endl;
			//check date format;
		}
		else {
			std::string	date = line.substr(0);
			std::cout << "Error: bad input => " << date << std::endl;
		}
	}
}

// calculate () {
	
// }

void btc(std::ifstream &file) {
	std::ifstream data("data.csv");
	if (!data.is_open()) {
		std::cout << "Error: could not open data.csv." << std::endl;
		return ;
	}
	BitcoinExchange bitcoin(data);
	data.close();
	parseInput(file);

	std::cout << "done\n";
	//calculate();
	//print();
}
