/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 22:03:34 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/29 23:33:08 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

# define RES "\033[0m"
# define BRED "\033[31;1m"
# define BGRN "\033[32;1m"
# define BYEL "\033[33;1m"
# define CYA "\033[0;36m"

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