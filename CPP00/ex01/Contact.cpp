/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:44:13 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/23 15:44:51 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/*--------------------------------Const & Dest-------------------------------*/

Contact::Contact()
{
	return ;
}
Contact::~Contact()
{
	return ;
}

/*--------------------------------Get Methods-------------------------------*/

std::string Contact::get_first_name() const
{
	return (first_name);
}

std::string Contact::get_last_name() const
{
	return (last_name);
}

std::string Contact::get_nickname() const
{
	return (nickname);
}


std::string Contact::get_phone_number() const
{
	return (phone_number);
}

std::string Contact::get_darkest_secret() const
{
	return (darkest_secret);
}

/*--------------------------------Set Methods-------------------------------*/

void	Contact::set_first_name(std::string str)
{
	first_name = str;
}

void	Contact::set_last_name(std::string str)
{
	last_name = str;
}
void	Contact::set_nickname(std::string str)
{
	nickname = str;
}
void	Contact::set_phone_number(std::string str)
{
	phone_number = str;
}
void	Contact::set_darkest_secret(std::string str)
{
	darkest_secret = str;
}
