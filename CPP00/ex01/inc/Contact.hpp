/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 12:36:09 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/28 16:50:25 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip> //manipulators
# include <cstdlib>

# define RED	"\033[0;31m"
# define GRN	"\033[0;32m"
# define YEL	"\033[0;33m"
# define BLU	"\033[0;34m"
# define BLA	"\033[0;30m"
# define CYA	"\033[0;36m"
# define GREY	"\033[0;90m"
# define BBLA	"\033[30;1m"
# define BRED 	"\033[31;1m"
# define BGRN	"\033[32;1m"
# define BYEL	"\033[33;1m"
# define BBLU	"\033[34;1m"
# define BMAG	"\033[35;1m"
# define BCYA	"\033[36;1m"
# define BWHI	"\033[37;1m"
# define RES	"\033[0m"

class Contact {
	public:
		Contact();
		~Contact();

		std::string get_first_name() const;
		std::string get_last_name() const;
		std::string get_nickname() const;
		std::string get_phone_number() const;
		std::string get_darkest_secret() const;

		void	set_first_name(std::string str);
		void	set_last_name(std::string str);
		void	set_nickname(std::string str);
		void	set_phone_number(std::string str);
		void	set_darkest_secret(std::string str);

	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

#endif