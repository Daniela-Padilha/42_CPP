/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:51:05 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/08/10 19:13:20 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Ice.hpp"
#include "inc/Cure.hpp"
#include "inc/Character.hpp"
#include "inc/MateriaSource.hpp"
#include <iostream>

void printSection(const std::string &title)
{
	std::cout << CYA << "\n==== " << title << " ====\n" << RES;
}

void subjectTest()
{
	std::cout << CYA "	--Test from subject--" RES << std::endl;
	printSection("Creating Materia Source");
	IMateriaSource*	src = new MateriaSource();

	printSection("Learning Materias");
	src->learnMateria( new Ice() );
	src->learnMateria( new Cure() );

	printSection("Creating Characters");
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");

	printSection("Creating and Equipping Materias");
	AMateria*	tmp;
	tmp = src->createMateria("Ice");
	me->equip(tmp);
	tmp = src->createMateria("Cure");
	me->equip(tmp);

	printSection("Using Materias");
	me->use(0, *bob);
	me->use(1, *bob);

	printSection("Cleaning up");
	delete bob;
	delete me;
	delete src;
}

void myTests()
{
	std::cout << CYA << "\n	--Starting My Tests--\n" << RES;

	printSection("Creating Materia Source");
	IMateriaSource* src = new MateriaSource();

	printSection("Learning Materias");
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());

	printSection("Creating Characters");
	ICharacter* eevee = new Character("eevee");
	ICharacter* piplup = new Character("piplup");

	printSection("Creating and Equipping Materias");
	AMateria* tmp;
	tmp = src->createMateria("Ice");
	eevee->equip(tmp);
	eevee->equip(src->createMateria("Cure"));
	eevee->equip(src->createMateria("Ice"));
	eevee->equip(src->createMateria("Cure"));
	eevee->equip(src->createMateria("Ice"));

	printSection("Using Materias");
	eevee->use(0, *piplup);
	eevee->use(1, *piplup);
	eevee->use(4, *piplup);

	printSection("Unequipping a Materia");
	eevee->unequip(0);

	printSection("Using After Unequip");
	eevee->use(0, *piplup);

	printSection("Piplup Equips and Uses");
	AMateria* ice2 = src->createMateria("Ice");
	piplup->equip(ice2);
	piplup->use(0, *eevee);

	printSection("Invalid Materia Creation");
	AMateria* unknown = src->createMateria("fire");
	if (!unknown)
		std::cout << BRED << "Unknown materia could not be created" << RES << std::endl;

	printSection("Cleaning up");
	delete piplup;
	delete eevee;
	delete src;
}

int	main()
{
	subjectTest();
	myTests();
	std::cout << BGRN << "\nAll tests done!\n" << RES;
	return (0);
}

