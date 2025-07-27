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
	std::cout << "A Brain was created!" << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor was called" << std::endl;
	*this = other;
}

/*-------------------------------Destructors---------------------------------*/

Brain::~Brain()
{
	std::cout << "You no longer have a Brain" << std::endl;
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