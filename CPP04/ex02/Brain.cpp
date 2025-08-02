/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:01:15 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/08/02 19:19:02                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Brain.hpp"

/*------------------------------Constructors---------------------------------*/

Brain::Brain()
{
	std::cout << BMAG "A Brain was created!" RES << std::endl;
	_ideas[0] = "idea1";
	_ideas[1] = "idea2";
	_ideas[2] = "idea3";

	for (int i = 3; i < 100; i++)
		_ideas[i] = "";
}

Brain::Brain(const Brain& other)
{
	std::cout << BYEL "Brain copy constructor was called" RES << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
}

/*-------------------------------Destructors---------------------------------*/

Brain::~Brain()
{
	std::cout << BRED "You no longer have a Brain" RES << std::endl;
}

/*------------------------------Operators------------------------------------*/

Brain& Brain::operator = (const Brain& other)
{
	std::cout << "Brain copy assignment operator was called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
	}
	return (*this);
}

/*-----------------------------Member Functions------------------------------*/

void Brain::setIdeas(int index, std::string idea)
{
	std::cout << BMAG "Changing idea number " << index << RES << std::endl;
	if (index >= 0 && index < 100)
		this->_ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return (this->_ideas[index]);
	return ("");
}
