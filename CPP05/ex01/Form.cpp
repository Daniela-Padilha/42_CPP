/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:47:41 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/22 14:17:42 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Form.hpp"
#include "inc/Bureaucrat.hpp"

/*------------------------------Constructors---------------------------------*/

Form::Form(): _name("Undefined"), _signGrade(150), _executeGrade(150),
				_isSigned(false)
{
	std::cout << BGRN "A new form was created\n" RES;
}

Form::Form(std::string name, int signGrade, int executeGrade): _name(name),
				_signGrade(signGrade), _executeGrade(executeGrade), _isSigned(false)
{
	if (this->_signGrade > 150 || this->_executeGrade > 150)
		throw GradeTooLowException();
	else if (this->_signGrade < 1 || this->_executeGrade < 1 )
		throw GradeTooHighException();
	std::cout << BGRN "Form " << getName() << " was created.\n";
}

Form::Form(const Form& other): _name(other._name), _signGrade(other._signGrade),
								_executeGrade(other._executeGrade), _isSigned(other._isSigned)
{
	std::cout << BYEL "Form copy constructor was called\n" RES;
}

/*-------------------------------Destructors---------------------------------*/

Form::~Form()
{
	std::cout << BRED << getName() << " form was destroyed\n" RES;
}

/*------------------------------Operators------------------------------------*/

Form& Form::operator = (const Form& other)
{
	std::cout << CYA "Form copy assignment operator was called\n" RES;
	if (this != &other)
	{
		this->_isSigned = other._isSigned;
	}
	return (*this);
}

std::ostream& operator << (std::ostream& output, const Form& f)
{
	output << CYA "Form " << f.getName() << " was created with the details: \n"
				<< "Grade required to sign: " << f.getSignGrade() << "\n"
				<< "Grade required to execute: " << f.getExecuteGrade() << "\n"
				<< "The form is signed: " << (f.getIsSigned() ? "true" : "false") << "\n" RES;
	return (output);
}

/*-----------------------------Member Functions------------------------------*/

const std::string	Form::getName() const
{
	return (this->_name);
}

int	Form::getSignGrade() const
{
	return (this->_signGrade);
}

int	Form::getExecuteGrade() const
{
	return (this->_executeGrade);
}

bool	Form::getIsSigned() const
{
	return (this->_isSigned);
}

void	Form::beSigned(const Bureaucrat& b)
{
	if (this->getIsSigned())
		throw FormAlreadySigned();
	else if (b.getGrade() <= this->_signGrade)
	{
		_isSigned = true;
		std::cout << BGRN "Form " << getName() << " was signed by " << b.getName() << "\n" RES;
	}
	else
		throw GradeTooLowException();
}

/*----------------------------Exception Classes------------------------------*/

const char* Form::GradeTooHighException::what() const throw()
{
	return ("\033[31;1mError: Grade too high\033[0m");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("\033[31;1mError: Grade too low\033[0m");
}

const char* Form::FormAlreadySigned::what() const throw()
{
	return ("\033[31;1mError: Form is already signed\033[0m");
}
