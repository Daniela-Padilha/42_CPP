/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:45:20 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/28 18:26:39 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/*--------------------------------Const & Dest-------------------------------*/

PhoneBook::PhoneBook()
{
	total = 0;
	oldest = 0;
}

PhoneBook::~PhoneBook()
{
	return ;
}

/*------------------------------------Utils----------------------------------*/

std::string	truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

int myIsSpace(std::string str)
{
	if (str.empty())
		return (0);
	for (int i = 0; i <= (int)str.length(); i++)
	{
		if (std::isspace(str[i]))
			return (1);
	}
	return (0);
}

/*--------------------------------Methods-------------------------------*/

std::string getInput(std::string field)
{
	std::string input;
	
	if (field != "Phone Number")
	{
		std::cout << field << ": ";
		std::getline(std::cin, input);
		if (input.empty() || myIsSpace(input))
		{
			std::cout << BRED "\nSpaces are not allowed! Try again! \n" RES << std::endl;
			return ("");
		}
		return (input);
	}
	else
	{
		std::cout << field << ": ";
		std::getline(std::cin, input);
		if (input.empty() || myIsSpace(input))
		{
			std::cout << BRED "\nSpaces are not allowed! Try again! \n" RES << std::endl;
			return ("");
		}
		for (int i = 0; i <= (int)input.length(); i++)
		{
			if (std::isalpha(input[i]))
			{
				std::cout << BRED "\nThis field only accepts numbers \n" RES << std::endl;
				return ("");
			}
			else
				continue ;
		}
		return (input);
	}
}

void	PhoneBook::add_contact()
{
	Contact		new_contact;
	std::string input;

	input = getInput("First Name");
	if (input.empty())
		return ;
	new_contact.set_first_name(input);
	
	input = getInput("Last Name");
	if (input.empty())
		return ;
	new_contact.set_last_name(input);

	input = getInput("Nickname");
	if (input.empty())
		return ;
	new_contact.set_nickname(input);

	input = getInput("Phone Number");
	if (input.empty())
		return ;
	new_contact.set_phone_number(input);
	
	input = getInput("Darkest Secret");
	if (input.empty())
		return ;
	new_contact.set_darkest_secret(input);
	
	contacts[oldest] = new_contact;
	oldest = (oldest + 1) % 8;
	if (total < 8)
		total++;
	std::cout << BGRN "--New contact added sucessfully-- \n" RES << std::endl;
}


void	PhoneBook::get_contact() const
{
	std::string index_s;
	int			index;
	int			i;

	i = 0;
	if (total == 0)
	{
		std::cout << "\033[31;1mPhoneBook is empty. Please add a contact! \n" RES << std::endl;
		return ;
	}
	std::cout << "\n|     Index|First Name| Last Name|  Nickname|" << std::endl;
	while (i < total)
	{
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << truncate(contacts[i].get_first_name());
		std::cout << "|" << std::setw(10) << truncate(contacts[i].get_last_name());
		std::cout << "|" << std::setw(10) << truncate(contacts[i].get_nickname());
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "\n\033[0;36mEnter contact index for more details: " RES;
	std::getline(std::cin, index_s);
	index = atoi(index_s.c_str());
	if (index < 1 || index > total || std::isalpha(index))
		std::cout << "\033[31;1mIndex is invalid \n" RES << std::endl;
	else
		display_contact(index - 1);
}

void	PhoneBook::display_contact(int id) const
{
	std::cout << std::endl;
	std::cout << "First Name: " << contacts[id].get_first_name() << std::endl;
	std::cout << "Last Name: " << contacts[id].get_last_name() << std::endl;
	std::cout << "Nickname: " << contacts[id].get_nickname() << std::endl;
	std::cout << "Phone Number: " << contacts[id].get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << contacts[id].get_darkest_secret() << std::endl;
	std::cout << std::endl;
}
