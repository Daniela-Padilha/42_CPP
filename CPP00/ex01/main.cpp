/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 13:19:58 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/28 16:50:36 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string cmd;
	PhoneBook book;

	while (1)
	{
		std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
		std::cout << CYA "Enter command: " RES;
		std::getline(std::cin, cmd);
		if (cmd == "EXIT" || std::cin.eof())
		{
			std::cout << BRED "Exiting PhoneBook" RES << std::endl;
			break ;
		}
		else if (cmd == "ADD")
		{
			std::cout << "\n--Adding new contact--" << std::endl;
			book.add_contact();
		}
		else if (cmd == "SEARCH")
		{
			std::cout << "\n";
			book.get_contact();
		}
		else
			std::cout << BRED "Unknown command \n" RES << std::endl;
	}
	return (0);
}
