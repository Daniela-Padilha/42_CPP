/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:42:56 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/08/10 17:16:30 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/MateriaSource.hpp"

/*------------------------------Constructors---------------------------------*/

MateriaSource::MateriaSource()
{
	std::cout << BGRN "Materia Source default constructor called" RES << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource& other)
{
	std::cout << BGRN "Materia Source copy constructor called" RES << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (other._materias[i])
			this->_materias[i] = other._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
}

/*-------------------------------Destructors---------------------------------*/

MateriaSource::~MateriaSource()
{
	std::cout << BRED "Materia Source destructor called" RES << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete this->_materias[i];
		this->_materias[i] = NULL;
	}
}

/*------------------------------Operators------------------------------------*/

MateriaSource& MateriaSource::operator = (MateriaSource& other)
{
	std::cout << BYEL "Materia Source copy assignment operator called" RES << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (other._materias[i])
				this->_materias[i] = other._materias[i]->clone();
			else
				this->_materias[i] = NULL;
		}
	}
	return (*this);
}

/*-----------------------------Member Functions------------------------------*/

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] == NULL)
		{
			this->_materias[i] = m->clone();
			std::cout << BGRN "Learned materia of type " << m->getType() << RES << std::endl;
			delete m;
			return ;
		}
	}
	std::cout << BRED "All learning space is occuppied" RES << std::endl;
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] && this->_materias[i]->getType() == type)
		{
			std::cout << BGRN "Created materia of type " << type << RES << std::endl;
			return (this->_materias[i]->clone());
		}
	}
	std::cout << BRED "Type not recognized, try learning it first" RES << std::endl;
	return (NULL);
}
