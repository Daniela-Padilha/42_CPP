/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:59:43 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/07/16 19:47:09                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Fixed.hpp"
#include <iostream>

const int Fixed::_bits = 8;

Fixed::Fixed() : _nbr(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed& newfixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = newfixed;
}

Fixed&	Fixed::operator=(const Fixed& newfixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &newfixed)
		this->_nbr = newfixed.getRawBits();
	return (*this);
}

int 	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nbr);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "RawBits member function called" << std::endl;
	this->_nbr = raw;
}
