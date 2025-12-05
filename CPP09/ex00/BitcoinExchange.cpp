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
			double			val = std::strtod(line.substr(position + 1).c_str(), NULL);
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

std::map<std::string, double> BitcoinExchange::getData() const {
	return this->_data;
}
