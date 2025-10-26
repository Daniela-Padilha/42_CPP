/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 21:59:41 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/26 15:00:14 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/whatever.hpp"
#include <iostream>

int main () {
	int a = 2;
	int b = 3;
	std::cout << BMAG "Original int values: " RES << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;

	::swap( a, b );
	std::cout << BMAG "\nAfter swap: " RES << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	
	std::cout << BMAG "\nMin and Max: " RES << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << BMAG "\nOriginal str values: " RES << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;

	::swap(c, d);
	std::cout << BMAG "\nAfter swap: " RES << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	
	std::cout << BMAG "\nMin and Max: " RES << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return (0);
}