/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 22:03:34 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/18 17:58:00 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class Fixed {

private:
	int	_nbr;
	static const int _bits;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& newfixed);
	Fixed(const int nbr);
	Fixed(const float decimal);

	Fixed&	operator = (const Fixed& newfixed);
	Fixed	operator + (const Fixed& other) const;
	Fixed	operator - (const Fixed& other) const;
	Fixed	operator * (const Fixed& other) const;
	Fixed	operator / (const Fixed& other) const;

	bool	operator > (const Fixed& other) const;
	bool	operator < (const Fixed& other) const;
	bool	operator >= (const Fixed& other) const;
	bool	operator <= (const Fixed& other) const;
	bool	operator == (const Fixed& other) const;
	bool	operator != (const Fixed& other) const;

	Fixed&	operator ++ (); //pre
	Fixed	operator ++ (int); //post
	Fixed&	operator -- (); //pre
	Fixed	operator -- (int); //post

	static Fixed& min(Fixed& value1, Fixed& value2);
	static const Fixed& min(const Fixed& value1, const Fixed& value2);
	static Fixed& max(Fixed& value1, Fixed& value2);
	static const Fixed& max(const Fixed& value1, const Fixed& value2);

	float	toFloat() const;
	int		toInt() const;
	int 	getRawBits() const;
	void	setRawBits(int const raw);
};

std::ostream& operator << (std::ostream& output, const Fixed& fixednbr);

#endif