/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:55:46 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/08/07 15:41:46 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ICharacter.hpp"
#include "inc/Character.hpp"

/*------------------------------Constructors---------------------------------*/

Character::Character(): _name("Not set")
{
	std::cout << BGRN "Character default constructor called" RES << std::endl;
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
}

Character::Character(std::string &name): _name(name)
{
	std::cout << BGRN "Character name constructor called" RES << std::endl;
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
}

Character::Character(Character const &other): _name(other._name)
{
	std::cout << BGRN "Character copy constructor called" RES << std::endl;
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
}

/*-------------------------------Destructors---------------------------------*/

Character::~Character()
{
	
}

/*------------------------------Operators------------------------------------*/

Character& Character::operator = (Character const &other)
{
	
}

/*-----------------------------Member Functions------------------------------*/

std::string const & Character::getName() const
{
	return(this->_name);
}

void Character::equip(AMateria& materia)
{
	
}

void Character::unequip(int slot, ICharacter &player)
{
	
}

void Character::use(int slot, ICharacter &player)
{
	
}
