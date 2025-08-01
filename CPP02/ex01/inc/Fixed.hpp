/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 21:04:45 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/18 17:57:31 by ddo-carm         ###   ########.fr       */
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
	float	toFloat() const;
	int		toInt() const;
	int 	getRawBits() const;
	void	setRawBits(int const raw);
};

std::ostream& operator << (std::ostream& output, const Fixed& fixednbr);

#endif
