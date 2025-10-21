/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 17:02:41 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/21 20:08:02 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Bureaucrat.hpp"
#include "inc/AForm.hpp"

/*------------------------------Constructors---------------------------------*/

Bureaucrat::Bureaucrat(): _name("Not defined"), _grade(150)
{
	std::cout << BGRN "Bureaucrat was created\n" RES;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
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
	std::cout << CYA "Bureaucrat copy assignment operator was called\n" RES;
	if (this != &other)
		this->_grade = other._grade;
	return (*this);
}

std::ostream& operator << (std::ostream& output, const Bureaucrat& b)
{
	output << CYA << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return (output);
}

/*-----------------------------Member Functions------------------------------*/

const std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::increment()
{
	if (this->_grade <= 1)
		throw GradeTooHighException();
	else
	{
		this->_grade--;
		std::cout << BGRN << getName() << "'s grade was incremented\n";
		std::cout << BGRN "New Grade: " << getGrade() << "\n" RES;
	}
}

void	Bureaucrat::decrement()
{
	if (this->_grade >= 150)
		throw GradeTooLowException();
	else
	{
		this->_grade++;
		std::cout << BGRN << getName() << "'s grade was decremented\n";
		std::cout << BGRN "New Grade: " << getGrade() << "\n" RES;
	}
}

void	Bureaucrat::signForm(AForm& f)
{
	try {
		f.beSigned(*this);
		std::cout << BGRN << getName() << " signed " << f.getName() << "\n" RES;
	}
	catch (std::exception& error) {
		std::cout << BRED << getName() << " couldn't sign " << f.getName()
					<< " because " << error.what() << RES "\n";
	}
}

void Bureaucrat::executeForm(AForm const & form) const
{
	try {
		form.execute(*this);
		std::cout << BGRN << getName() << " executed " << form.getName() << RES "\n";
	} catch (std::exception& error) {
		std::cout << BRED << getName() << " couldn't execute " << form.getName()
					<< " because " << error.what() << RES "\n";
	}
}

/*----------------------------Exception Classes------------------------------*/

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("\033[31;1mError: Grade too high\033[0m");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("\033[31;1mError: Grade too low\033[0m");
}

const char* Bureaucrat::FormNotExecutableException::what() const throw()
{
	return ("\033[31;1mError: Form is not signed\033[0m");
}
