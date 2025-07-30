/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 20:38:31 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/30 15:33:17 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(const std::string& name);
		~ScavTrap();
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator = (const ScavTrap& other);
		
		void attack(const std::string& target);
		void guardGate();
};

#endif