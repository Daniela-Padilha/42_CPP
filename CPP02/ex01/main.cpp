/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 21:04:41 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/17 22:01:24 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Fixed.hpp"

int main( void )
{
	std::cout << CYA "	OBJECT: a" RES << std::endl;
	Fixed		a;
	std::cout << std::endl;

	std::cout << CYA "	OBJECT: b" RES << std::endl;
	Fixed const b( 10 );
	std::cout << std::endl;
	
	std::cout << CYA "	OBJECT: c" RES << std::endl;
	Fixed const c( 42.42f );
	std::cout << std::endl;
	
	std::cout << CYA "	OBJECT: d" RES << std::endl;
	Fixed const d( b );

	std::cout << std::endl;
	a = Fixed( 1234.4321f );
	std::cout << std::endl;

	std::cout << CYA "	VALUES" RES << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << std::endl;

	std::cout << CYA "	Int conversion" RES << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << std::endl;
	
	return 0;
}
