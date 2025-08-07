/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:47:35 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/08/07 13:46:30 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

# define RES "\033[0m"
# define BRED "\033[31;1m"
# define BGRN "\033[32;1m"
# define BYEL "\033[33;1m"
# define CYA "\033[0;36m"
# define BMAG "\033[35;1m"

class Ice : public AMateria
{
	private:
		std::string _type;
	public:
		Ice();
		Ice(Ice const &other);
		~Ice();
		Ice& operator = (Ice const &other);

		void setType(std::string& type);
		Ice *clone() const;
		void use(ICharacter& target);
};

#endif