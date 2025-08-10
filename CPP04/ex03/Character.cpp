/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:55:46 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/08/10 17:30:15 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ICharacter.hpp"
#include "inc/Character.hpp"

/*------------------------------Constructors---------------------------------*/

Character::Character(): _name("Not set"), _floorI(0)
{
	std::cout << BGRN "Character default constructor called" RES << std::endl;
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
	for (int i = 0; i < 10; i++)
		this->_floor[i] = NULL;
}

Character::Character(std::string const &name): _name(name), _floorI(0)
{
	std::cout << BGRN "Character name constructor called" RES << std::endl;
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
	for (int i = 0; i < 10; i++)
		this->_floor[i] = NULL;
}

Character::Character(Character const &other): _name(other._name), _floorI(0)
{
	std::cout << BGRN "Character copy constructor called" RES << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (other._slots[i])
			this->_slots[i] = other._slots[i]->clone();
		else
			this->_slots[i] = NULL;
	}
	for (int i = 0; i < 10; i++)
		this->_floor[i] = NULL;
}

/*-------------------------------Destructors---------------------------------*/

Character::~Character()
{
	std::cout << BRED "Character destructor called" RES << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete this->_slots[i];
		this->_slots[i] = NULL;
	}
	for (int i = 0; i < 10; i++)
		delete this->_floor[i];
}

/*------------------------------Operators------------------------------------*/

Character& Character::operator = (Character const &other)
{
	std::cout << BYEL "Character copy assignment operator called" RES << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			delete this->_slots[i];
			if (other._slots[i])
				this->_slots[i] = other._slots[i]->clone();
			else
				this->_slots[i] = NULL;
		}
		for (int i = 0; i < 10; i++)
		{
			delete this->_floor[i];
			this->_floor[i] = NULL;
		}
		this->_floorI = 0;
	}
	return (*this);
}

/*-----------------------------Member Functions------------------------------*/

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << BRED "Unknown materia" RES << std::endl;
		return;	
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_slots[i] == NULL)
		{
			this->_slots[i] = m;
			std::cout << BGRN << m->getType() << " was equiped on slot number " << i << RES << std::endl;
			return ;
		}
	}
	std::cout << BRED << this->_name << " slots' are full" RES << std::endl;	
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->_slots[idx])
	{
		if (_floorI < 10)
		{
			std::cout << BRED << this->_slots[idx]->getType() << " was unequiped and is now on the floor" RES << std::endl;
			this->_floor[_floorI++] = this->_slots[idx];
			this->_slots[idx] = NULL;
			return ;
		}
		std::cout << BRED "The floor is too full, please consider recycling" RES << std::endl;
		return ;
	}
	std::cout << BRED "Cannot unequip slot " << idx << " because it is empty or out of range" RES << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->_slots[idx])
	{
		this->_slots[idx]->use(target);
		return ;
	}
	std::cout << BRED "Cannot use slot " << idx << " because it is empty or out of range" RES << std::endl;
}
