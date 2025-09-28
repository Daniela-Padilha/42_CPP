/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 17:02:41 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/09/28 19:09:11 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Bureaucrat.hpp"

/*------------------------------Constructors---------------------------------*/

Bureaucrat::Bureaucrat(): _name("Not defined"), _grade(150)
{
	std::cout << BGRN "Bureaucrat was created\n" RES;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other): _name(other._name), _grade(other._grade)
{
	std::cout << BYEL "Bureaucrat copy constructor was called\n" RES;
}

/*-------------------------------Destructors---------------------------------*/

Bureaucrat::~Bureaucrat()
{
	std::cout << BRED "Bureaucrat " << getName() << " was fired\n" RES;
}

/*------------------------------Operators------------------------------------*/

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& other)
{
	std::cout << "Bureaucrat copy assignment operator was called\n";
	if (this != &other)
		this->_grade = other._grade;
	return (*this);
}

std::ostream& operator << (std::ostream& output, const Bureaucrat& b)
{
	output << b.getName() << " , bureaucrat grade " << b.getGrade() << ".";
	return (output);
}

/*-----------------------------Member Functions------------------------------*/

const std::string Bureaucrat::getName() const
{
	return (_name);
}
unsigned int Bureaucrat::getGrade() const
{
	return (_grade);
}

unsigned int	Bureaucrat::increment()
{
	try
	{
		this->_grade -= 1;
		if (this->_grade >= 1)
		{
			std::cout << BGRN "Grade was incremented by 1\n";
			std::cout << BGRN "New Grade: " << getGrade() << "\n";
		}
		else
			throw ();
	}
	catch ()
	{
		
	}
}

unsigned int	Bureaucrat::decrement()
{
	
}
