/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 13:19:58 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/23 18:43:48 by ddo-carm         ###   ########.fr       */
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
		std::cout << "\033[0;36mEnter command: \033[0m";
		std::getline(std::cin, cmd);
		if (cmd == "EXIT" || std::cin.eof())
		{
			std::cout << "\033[31;1mExiting PhoneBook \033[0m" << std::endl;
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
			std::cout << "\033[31;1mUnknown command \033[0m \n" << std::endl;
	}
	return (0);
}
