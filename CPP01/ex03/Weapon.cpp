/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 22:37:24 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/07/14 17:29:11                                           */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string str)
{
	this->_type = str;
}

Weapon::~Weapon(void)
{
	return ;
}

const std::string& Weapon::getType(void)
{
	return (this->_type);
}

void	Weapon::setType(std::string newtype)
{
	this->_type = newtype;
}
