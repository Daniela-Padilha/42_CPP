/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:56:12 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/08/07 15:41:38 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include <string>

class Character: public ICharacter
{
	private:
		std::string _name;
		AMateria* 	_slots[4];
	public:
		Character();
		Character(std::string &name);
		Character(Character const &other);
		~Character();
		Character& operator = (Character const &other);

		std::string const & Character::getName() const;
		void equip(AMateria& materia);
		void unequip(int slot, ICharacter &player);
		void use(int slot, ICharacter &player);
};

#endif