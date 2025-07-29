/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 22:04:04 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/07/30 00:02:20                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Fixed.hpp"

void testComparisons(const Fixed& a, const Fixed& b);

int main( void )
{
	std::cout << CYA "	Object: a" RES << std::endl;
	Fixed	a;
	std::cout << std::endl;

	std::cout << CYA "	Object: b" RES << std::endl;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << std::endl;

	std::cout << CYA "	OPERATORS" RES << std::endl;

	//values
	std::cout << CYA "Value: a" RES << std::endl;
	std::cout << a << std::endl << std::endl;

	std::cout << CYA "Value: b" RES << std::endl;
	std::cout << b << std::endl << std::endl;

	std::cout << CYA "Operator ++a" RES << std::endl;
	std::cout << ++a << std::endl << std::endl;

	std::cout << CYA "Value after ++a" RES << std::endl;
	std::cout << a << std::endl << std::endl;

	std::cout << CYA "Operator a++" RES << std::endl;
	std::cout << a++ << std::endl;
	std::cout << std::endl;
	
	std::cout << CYA "Value after a++" RES << std::endl;
	std::cout << a << std::endl << std::endl;

	//Arithmetic
	std::cout << CYA "	Objects for arithmetic tests\n" RES << std::endl;
	Fixed c = a + b;
    Fixed d = b - a;
    Fixed e = a * b;
    Fixed f = b / a;

	std::cout << CYA "\nArithmetic Operators" RES << std::endl;
    std::cout << "a + b = " << c << std::endl;
    std::cout << "b - a = " << d << std::endl;
    std::cout << "a * b = " << e << std::endl;
    std::cout << "b / a = " << f << std::endl << std::endl;

	//Comparison operators
	testComparisons(a, b);

	//min and max
	std::cout << CYA "Max value" RES << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl << std::endl;

	std::cout << CYA "Min value" RES << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl << std::endl;

 	return 0;
}

void testComparisons(const Fixed& a, const Fixed& b)
{
    std::cout << CYA "Comparison Operators" RES << std::endl;

    std::cout << "a == b? ";
    if (a == b)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    std::cout << "a != b? ";
    if (a != b)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    std::cout << "a < b? ";
    if (a < b)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    std::cout << "a > b? ";
    if (a > b)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    std::cout << "a <= b? ";
    if (a <= b)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    std::cout << "a >= b? ";
    if (a >= b)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    std::cout << std::endl;
}
