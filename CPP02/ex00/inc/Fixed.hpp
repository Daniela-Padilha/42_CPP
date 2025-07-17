/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:01:29 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/17 20:25:51 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
	int	_nbr;
	static const int _bits;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& newfixed);
	Fixed& operator=(const Fixed& newfixed);

	int 	getRawBits() const;
	void	setRawBits(int const raw);
};


#endif