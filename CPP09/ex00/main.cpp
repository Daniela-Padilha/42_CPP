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

bool parseDate(t_input *input, std::string line, size_t pos) {
	std::string	date = line.substr(0, pos);
	int y, m, d;

	while (!date.empty() && std::isspace(date[date.size() - 1]))
		date.erase(date.size() - 1, 1);
	if (std::sscanf(date.c_str(), "%d-%d-%d", &y, &m, &d) == 3) {
		if (y < 1900 || y > 2025 ||
			m < 1 || m > 12 ||
			d < 1 || d > 31) {
			std::cout << "Error: bad input => " << date << std::endl;
			return false;
			}
		}
		else {
			std::cout << "Error: bad input => " << date << std::endl;
			return false;
		}
	input->date = date;
	return true;
}

bool parseVal(t_input *input, std::string line, size_t pos) {
	std::string valStr = line.substr(pos + 1);
	while (!valStr.empty() && std::isspace(valStr[valStr.size() - 1]))
		valStr.erase(valStr.size() - 1, 1);

	long long	val = std::atoll(valStr.c_str());
	if (val < 0) {
		std::cout << "Error: not a positive number." << std::endl;
		return false;
	}
	else if (val > 1000) {
		std::cout << "Error: too large a number." << std::endl;
		return false;
	}
	input->val = val;
	return true;
}

void calculate(BitcoinExchange &bitcoin, t_input *input) {
	std::map<std::string, float> database = bitcoin.getData();
	database::iterator it = database.lower_bound(input->date);
	if (it == database.begin() && it->first != input->date) {
		std::cout << "2009-01-02 => " << input->val << " = " << input->val * 0 << std::endl;
	}
	else {
		if (it == database.end() || it->first != input->date)
			--it;
	}
	std::cout << "calculating...\n";
}

void parseInput(BitcoinExchange &bitcoin, std::ifstream &file) {
	t_input		input;
	std::string line;
	std::getline(file, line);

	if (line.compare("date | value") != 0) {
		std::cout << "Error: bad input" << std::endl;
	}

	while (std::getline(file, line)) {
		if (line.empty())
			continue ;
		
		size_t	pos = line.find('|');
		if (pos != std::string::npos && parseDate(&input, line, pos) && parseVal(&input, line, pos))
			calculate(bitcoin, &input);
		else if (pos == std::string::npos){
			std::string	dateOnly = line.substr(0);
			std::cout << "Error: bad input => " << dateOnly << std::endl;
		}
	}
}

void btc(std::ifstream &file) {
	std::ifstream data("data.csv");
	if (!data.is_open()) {
		std::cout << "Error: could not open data.csv." << std::endl;
		return ;
	}
	BitcoinExchange bitcoin(data);
	data.close();
	parseInput(bitcoin, file);
}

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