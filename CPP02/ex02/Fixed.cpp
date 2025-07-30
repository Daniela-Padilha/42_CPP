/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 22:03:59 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/07/30 00:41:25                                             */
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
}

/*------------------------------Operators------------------------------------*/

Fixed& Fixed::operator = (const Fixed& newfixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &newfixed)
		this->_nbr = newfixed.getRawBits();
	return (*this);
}

std::ostream& operator << (std::ostream& output, const Fixed& fixednbr)
{
	output << fixednbr.toFloat();
	return (output);
}

Fixed	Fixed::operator + (const Fixed& other) const
{
	Fixed newfixed;

	newfixed.setRawBits(this->getRawBits() + other.getRawBits());
	return (newfixed);
}

Fixed	Fixed::operator - (const Fixed& other) const
{
	Fixed newfixed;

	newfixed.setRawBits(this->getRawBits() - other.getRawBits());
	return (newfixed);
}

Fixed	Fixed::operator * (const Fixed& other) const
{
	Fixed newfixed;
	long long rawnbr;

	rawnbr = ((long long)this->getRawBits() * (long long)other.getRawBits());
	newfixed.setRawBits((int)(rawnbr >> _bits));
	return (newfixed);
}

Fixed	Fixed::operator / (const Fixed& other) const
{
	Fixed newfixed;
	long long rawnbr;

	rawnbr = (((long long)this->getRawBits() << _bits) / (long long)other.getRawBits());
	newfixed.setRawBits((int)rawnbr);
	return (newfixed);
}

bool	Fixed::operator > (const Fixed& other) const
{
	if (this->getRawBits() > other.getRawBits())
		return (true);
	else
		return (false);
}
bool	Fixed::operator < (const Fixed& other) const
{
	if (this->getRawBits() < other.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator >= (const Fixed& other) const
{
	if (this->getRawBits() >= other.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator <= (const Fixed& other) const
{
	if (this->getRawBits() <= other.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator == (const Fixed& other) const
{
	if (this->getRawBits() == other.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator != (const Fixed& other) const
{
	if (this->getRawBits() != other.getRawBits())
		return (true);
	else
		return (false);
}

//pre
Fixed&	Fixed::operator ++ ()
{
	this->_nbr++;
	return (*this);
}

//post
Fixed	Fixed::operator ++ (int)
{
	Fixed newfixed;

	newfixed.setRawBits(this->getRawBits());
	this->_nbr++;
	return (newfixed);
}

//pre
Fixed&	Fixed::operator -- ()
{
	this->_nbr--;
	return (*this);
}

//post
Fixed	Fixed::operator -- (int)
{
	Fixed newfixed;

	newfixed.setRawBits(this->getRawBits());
	this->_nbr--;
	return (newfixed);
}

/*-----------------------------Member Functions------------------------------*/

Fixed& Fixed::min(Fixed& value1, Fixed& value2)
{
	if (value1._nbr < value2._nbr)
		return (value1);
	else
		return (value2);
}

const Fixed& Fixed::min(const Fixed& value1, const Fixed& value2)
{
	if (value1._nbr < value2._nbr)
		return (value1);
	else
		return (value2);
}

Fixed& Fixed::max(Fixed& value1, Fixed& value2)
{
	if (value1._nbr > value2._nbr)
		return (value1);
	else
		return (value2);
}

const Fixed& Fixed::max(const Fixed& value1, const Fixed& value2)
{
	if (value1._nbr > value2._nbr)
		return (value1);
	else
		return (value2);
}

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
