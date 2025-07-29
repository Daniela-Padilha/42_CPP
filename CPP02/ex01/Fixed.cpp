/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 21:04:43 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/07/29 23:05:55                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Fixed.hpp"

/*------------------------------Constructors---------------------------------*/

const int Fixed::_bits = 8;

Fixed::Fixed() : _nbr(0)
{
	std::cout << BGRN "Default constructor called" RES << std::endl;
}

Fixed::Fixed(const Fixed& newfixed)
{
	std::cout << BYEL "Copy constructor called" RES << std::endl;
	*this = newfixed;
}

Fixed::Fixed(const int nbr)
{
	std::cout << BGRN "Int constructor called" RES << std::endl;
	this->_nbr = nbr << this->_bits;
}

Fixed::Fixed(const float decimal)
{
	std::cout << BGRN "Float constructor called" RES << std::endl;
	this->_nbr = roundf(decimal * (1 << this->_bits));
}

/*-------------------------------Destructors---------------------------------*/

Fixed::~Fixed()
{
	std::cout << BRED "Destructor called" RES << std::endl;
	return ;
}

/*------------------------------Operators------------------------------------*/

Fixed& Fixed::operator = (const Fixed& newfixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &newfixed)
		this->_nbr = newfixed._nbr;
	return (*this);
}

std::ostream& operator << (std::ostream& output, const Fixed& fixednbr)
{ 
	output << fixednbr.toFloat();
	return (output);
}

/*-----------------------------Member Functions------------------------------*/

float	Fixed::toFloat() const
{
	return ((float)this->_nbr / (1 << this->_bits));
}

int	Fixed::toInt() const
{
	return (this->_nbr >> this->_bits);
}

int	Fixed::getRawBits() const
{
	return (this->_nbr);
}

void	Fixed::setRawBits(int const raw)
{
	this->_nbr = raw;
}
