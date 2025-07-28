/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 22:37:09 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/28 18:54:45 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

# define BRED 	"\033[31;1m"
# define BGRN	"\033[32;1m"
# define RES	"\033[0m"

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);
		const std::string& getType(void);
		void		 setType(std::string newtype);

	private:
		std::string	_type;
};

#endif
