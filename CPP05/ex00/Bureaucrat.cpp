/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 17:02:41 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/09/29 19:37:19 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Bureaucrat.hpp"

/*------------------------------Constructors---------------------------------*/

Bureaucrat::Bureaucrat(): _name("Not defined"), _grade(150)
{
	std::cout << BGRN "Bureaucrat was created\n" RES;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade): _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
	std::cout << BGRN "Bureaucrat " << getName() << " was created with grade " 
				<< getGrade() << "\n" RES;
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
	output << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
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

void	Bureaucrat::increment()
{
	if (this->_grade <= 1)
		throw GradeTooHighException();
	else
	{
		this->_grade--;
		std::cout << BGRN "Grade was incremented\n";
		std::cout << BGRN "New Grade: " << getGrade() << "\n";
	}
}

void	Bureaucrat::decrement()
{
	if (this->_grade >= 150)
		throw GradeTooLowException();
	else
	{
		this->_grade++;
		std::cout << BGRN "Grade was decremented\n";
		std::cout << BGRN "New Grade: " << getGrade() << "\n";
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("\033[31;1mError: Grade too high\033[0m\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("\033[31;1m Error: Grade too low\033[0m\n");
}
