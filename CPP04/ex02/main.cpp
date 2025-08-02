/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 00:02:15 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/08/02 19:57:08                                             */
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
	const Animal* pets[4];

	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			pets[i] = new Cat();
		else
			pets[i] = new Dog();
	}

	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
		delete (pets[i]);

	std::cout << std::endl;
	std::cout << CYA "	----Are we using the same Brain?----" RES << std::endl;
	std::cout << CYA "	Cat: 1" RES << std::endl;
	Cat cat1;
	std::cout << std::endl;

	std::cout << CYA "	Cat: 2" RES << std::endl;
	Cat cat2(cat1);
	std::cout << std::endl;

	std::cout << CYA "	Original Idea" RES << std::endl;
	std::cout << "Idea of cat 1: " << cat1.getBrain()->getIdea(1) << std::endl;
	std::cout << "Idea of cat 2: " << cat2.getBrain()->getIdea(1) << std::endl;

	std::cout << std::endl;
	cat2.getBrain()->setIdeas(1, "No clue");
	std::cout << std::endl;
	std::cout << "Idea of cat 1: " << cat1.getBrain()->getIdea(1) << std::endl;
	std::cout << "Idea of cat 2: " << cat2.getBrain()->getIdea(1) << std::endl;
	std::cout << std::endl;

	std::cout << CYA "	Dog: 1" RES << std::endl;
	Dog dog1;
	std::cout << std::endl;

	std::cout << CYA "	Dog: 2" RES << std::endl;
	Dog dog2(dog1);
	std::cout << std::endl;

	std::cout << CYA "	Original Idea" RES << std::endl;
	std::cout << "Idea of Dog 1: " << dog1.getBrain()->getIdea(1) << std::endl;
	std::cout << "Idea of Dog 2: " << dog2.getBrain()->getIdea(1) << std::endl;

	std::cout << std::endl;
	dog2.getBrain()->setIdeas(1, "I want treats");
	std::cout << std::endl;
	std::cout << "Idea of Dog 1: " << dog1.getBrain()->getIdea(1) << std::endl;
	std::cout << "Idea of Dog 2: " << dog2.getBrain()->getIdea(1) << std::endl;
	std::cout << std::endl;

	return 0;
}
