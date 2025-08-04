/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:04:27 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/08/04 20:48:31                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/AMateria.hpp"

/*------------------------------Constructors---------------------------------*/

AMateria::AMateria()
{

}

AMateria::AMateria(const AMateria& other)
{

}

AMateria::AMateria(std::string const & type)
{

}

/*-------------------------------Destructors---------------------------------*/

virtual AMateria::~AMateria()
{

}

/*------------------------------Operators------------------------------------*/

AMateria& AMateria::operator = (AMateria& const other)
{

}

/*-----------------------------Member Functions------------------------------*/

std::string const & AMateria::getType() const
{

}

virtual void AMateria::use(ICharacter& target)
{

}
