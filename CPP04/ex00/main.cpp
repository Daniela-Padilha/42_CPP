/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 00:02:15 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/07/27 16:33:40                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Cat.hpp"
#include "inc/Dog.hpp"
#include "inc/WrongCat.hpp"

int main()
{
	std::cout << CYA "	----Animal----" RES << std::endl;
	std::cout << CYA "	Object: meta" RES << std::endl;
	const Animal* meta = new Animal();
	std::cout << std::endl;

	std::cout << CYA "	Object: j" RES << std::endl;
	const Animal* j = new Dog();
	std::cout << std::endl;

	std::cout << CYA "	Object: i" RES << std::endl;
	const Animal* i = new Cat();
	std::cout << std::endl;

	std::cout << CYA "	Get type" RES << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;

	std::cout << CYA "	Sounds" RES << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	delete (meta);
	delete (j);
	delete (i);

	std::cout << std::endl;
	std::cout << CYA "	----Wrong Animal----" RES << std::endl;
	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* c = new WrongCat();
	std::cout << std::endl;

	std::cout << CYA "	Get type" RES << std::endl;
	std::cout << c->getType() << " " << std::endl;
	std::cout << std::endl;

	std::cout << CYA "	Sounds" RES << std::endl;
	c->makeSound();
	wrong->makeSound();

	std::cout << std::endl;
	delete (wrong);
	delete (c);

	return 0;
}
