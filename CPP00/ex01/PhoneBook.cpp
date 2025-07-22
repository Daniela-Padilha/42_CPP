/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 12:24:10 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/07/22 22:32:43                                             */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	total = 0;
	oldest = 0;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void	PhoneBook::add_contact()
{
	Contact		new_contact;
	std::string input;

	std::cout << "First Name: ";
	std::getline(std::cin, input);
	new_contact.set_first_name(input);

	std::cout << "Last Name: ";
	std::getline(std::cin, input);
	new_contact.set_last_name(input);

	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	new_contact.set_nickname(input);

	std::cout << "Phone Number: ";
	std::getline(std::cin, input);
	new_contact.set_phone_number(input);

	std::cout << "Darkest Secret: ";
	std::getline(std::cin, input);
	new_contact.set_darkest_secret(input);

	contacts[oldest] = new_contact;
	oldest = (oldest + 1) % 8;
	if (total < 8)
		total++;
}

std::string	truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	PhoneBook::get_contact() const
{
	std::string index_s;
	int			index;
	int			i;

	i = 0;
	if (total == 0)
	{
		std::cout << "PhoneBook is empty" << std::endl;
		return ;
	}
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	while (i < total)
	{
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << truncate(contacts[i].get_first_name());
		std::cout << "|" << std::setw(10) << truncate(contacts[i].get_last_name());
		std::cout << "|" << std::setw(10) << truncate(contacts[i].get_nickname());
		std::cout << std::endl;
		i++;
	}
	std::cout << "Enter contact index for more details: ";
	std::getline(std::cin, index_s);
	index = atoi(index_s.c_str());
	if (index < 1 || index > total || std::isalpha(index))
		std::cout << "Index is invalid" << std::endl;
	else
		display_contact(index - 1);
}

void	PhoneBook::display_contact(int id) const
{
	std::cout << "First Name: " << contacts[id].get_first_name() << std::endl;
	std::cout << "Last Name: " << contacts[id].get_last_name() << std::endl;
	std::cout << "Nickname: " << contacts[id].get_nickname() << std::endl;
	std::cout << "Phone Number: " << contacts[id].get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << contacts[id].get_darkest_secret() << std::endl;
}
