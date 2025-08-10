/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:56:12 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/08/10 16:11:03 by ddo-carm         ###   ########.fr       */
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
		AMateria*	_floor[10];
		int			_floorI;
		
	public:
		Character();
		Character(std::string &name);
		Character(Character const &other);
		~Character();
		Character& operator = (Character const &other);

		std::string const & Character::getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif