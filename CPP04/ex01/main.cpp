/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 00:02:15 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/07/27 17:31:24                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Cat.hpp"
#include "inc/Dog.hpp"
#include "inc/WrongCat.hpp"

int main()
{
	std::cout << CYA "	----Animal----" RES << std::endl;
	std::cout << CYA "	Object: j" RES << std::endl;
	const Animal* j = new Dog();
	std::cout << std::endl;

	std::cout << CYA "	Object: i" RES << std::endl;
	const Animal* i = new Cat();
	std::cout << std::endl;
	
	delete j;
	std::cout << std::endl;
	delete i;
	std::cout << std::endl;

	std::cout << CYA "	----Pets----" RES << std::endl;
	const Animal* pets[3];

	for (int i = 0; i < 3; i++)
	{
		if (i % 2 == 0)
			pets[i] = new Cat();
		else
			pets[i] = new Dog();
	}

	std::cout << std::endl;
	for (int i = 0; i < 3; i++)
		delete (pets[i]);

	return 0;
}
