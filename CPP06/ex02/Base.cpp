/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:47:15 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/24 22:00:51 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Base.hpp"
#include "inc/A.hpp"
#include "inc/B.hpp"
#include "inc/C.hpp"

/*-------------------------------Destructors---------------------------------*/

Base::~Base()
{
	std::cout << BRED "Base was destroyed\n" RES;
}

/*----------------------------External Functions-----------------------------*/

Base* generate(void)
{
	int index = std::rand() % 3;
	
	switch (index) {
		case 0:
			std::cout << BGRN "Generating class A" RES << std::endl;
			return (new A());
		case 1:
			std::cout << BGRN "Generating class B" RES << std::endl;
			return (new B());
		case 2:
			std::cout << BGRN "Generating class C" RES << std::endl;
			return (new C());
		default:
			std::cout << BRED "Error: could not generate a class" RES << std::endl;
			return (NULL);
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << CYA "The real type of p is: A" RES << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << CYA "The real type of p is: B" RES << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << CYA "The real type of p is: C" RES << std::endl;
	else
		std::cout << BRED "Error: unknown object" RES << std::endl;
}

void identify(Base& p)
{
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << CYA "The real type of p is: A" RES << std::endl;
		return ;
	} catch (std::exception& error) {
		std::cout << "Caught exception: " << error.what() << std::endl;
	}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << CYA "The real type of p is: B" RES << std::endl;
		return ;
	} catch (std::exception& error) {
		std::cout << "Caught exception: " << error.what() << std::endl;
	}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << CYA "The real type of p is: C" RES << std::endl;
		return ;
	} catch (std::exception& error) {
		std::cout << "Caught exception: " << error.what() << std::endl;
	}
	std::cout << BRED "Error: unknown object" RES << std::endl;
}
