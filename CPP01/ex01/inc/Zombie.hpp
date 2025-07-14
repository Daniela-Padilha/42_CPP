/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:19:40 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/13 18:54:06 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class Zombie 
{
	public:
		~Zombie(void);
		Zombie(void);
		Zombie(std::string newname);
		std::string getName(void);
		void		setName(std::string name);
		void 		announce(void);
		
	private:
		std::string _name;
};

#endif