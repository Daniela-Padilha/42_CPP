/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 13:19:36 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/13 17:10:49 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie 
{
	public:
		~Zombie(void);
		Zombie(void);
		Zombie(std::string newname);
		std::string getName(void);
		void 		announce(void);
		
	private:
		std::string _name;
};

#endif