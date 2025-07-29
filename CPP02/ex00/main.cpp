/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:52:46 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/29 15:52:48 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Fixed.hpp"
#include <iostream>

int main() 
{
	std::cout << CYA "	OBJECT: a" RES << std::endl;
	Fixed a;
	std::cout << std::endl;
	
	std::cout << CYA "	OBJECT: b" RES << std::endl;
	Fixed b( a );
	std::cout << std::endl;
	
	std::cout << CYA "	OBJECT: c" RES << std::endl;
	Fixed c;
	c = b;
	
	std::cout << std::endl;
	std::cout << CYA "	Get functions" RES << std::endl;
	std::cout << CYA "Object a: " RES << a.getRawBits() << std::endl;
	std::cout << CYA "Object b: " RES << b.getRawBits() << std::endl;
	std::cout << CYA "Object c: " RES << c.getRawBits() << std::endl;
	std::cout << std::endl;
	
	return 0;
}
