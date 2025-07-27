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
	const Animal* pets[10];
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			pets[i] = new Cat();
		else
			pets[i] = new Dog();
	}

	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		delete (pets[i]);

	std::cout << std::endl;
	delete j;//should not create a leak
	std::cout << std::endl;
	delete i;

	return 0;
}
