/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:02:53 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/30 15:20:27 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

# define RES "\033[0m"
# define BRED "\033[31;1m"
# define BGRN "\033[32;1m"
# define BYEL "\033[33;1m"
# define CYA "\033[0;36m"
# define RED "\033[0;31m"
# define GRN "\033[0;32m"

class ClapTrap {
	protected:
		std::string				_name;
		unsigned int			_hit;
		unsigned int			_energy;
		unsigned int			_attack;
	public:
		ClapTrap();
		ClapTrap(const std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator = (const ClapTrap& other);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif