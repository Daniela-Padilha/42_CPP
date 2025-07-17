/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 22:03:59 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/17 22:04:02 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Fixed.hpp"

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

Fixed& Fixed::operator=(const Fixed& newfixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &newfixed)
		this->_nbr = newfixed.getRawBits();
	return (*this);
}

Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor called" << std::endl;
	this->_nbr = nbr << this->_bits;
}

Fixed::Fixed(const float decimal)
{
	std::cout << "Float constructor called" << std::endl;
	this->_nbr = roundf(decimal * (1 << this->_bits));
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

std::ostream& operator<<(std::ostream& output, const Fixed& fixednbr)
{
	output << fixednbr.toFloat();
	return (output);
}
