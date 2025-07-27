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
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	delete (meta);
	delete (j);
	delete (i);

	std::cout << std::endl;
	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* c = new WrongCat();
	std::cout << std::endl;

	std::cout << c->getType() << " " << std::endl;
	std::cout << std::endl;

	c->makeSound();
	wrong->makeSound();

	std::cout << std::endl;
	delete (wrong);
	delete (c);

	return 0;
}
