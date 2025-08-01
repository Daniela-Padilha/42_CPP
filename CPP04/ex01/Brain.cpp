/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:01:15 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/07/27 17:24:27                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Brain.hpp"

/*------------------------------Constructors---------------------------------*/

Brain::Brain()
{
	std::cout << BMAG "A Brain was created!" RES << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << BYEL "Brain copy constructor was called" RES << std::endl;
	*this = other;
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