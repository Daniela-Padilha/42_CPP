/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:47:41 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/22 14:29:52 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/AForm.hpp"
#include "inc/Bureaucrat.hpp"

/*------------------------------Constructors---------------------------------*/

AForm::AForm(): _name("Undefined"), _signGrade(150), _executeGrade(150),
				_isSigned(false)
{
	std::cout << BGRN "A new form was created\n" RES;
}

AForm::AForm(std::string name, int signGrade, int executeGrade): _name(name),
				_signGrade(signGrade), _executeGrade(executeGrade), _isSigned(false)
{
	if (this->_signGrade > 150 || this->_executeGrade > 150)
		throw GradeTooLowException();
	else if (this->_signGrade < 1 || this->_executeGrade < 1 )
		throw GradeTooHighException();
	std::cout << BGRN "Form " << getName() << " was created.\n";
}

AForm::AForm(const AForm& other): _name(other._name), _signGrade(other._signGrade),
								_executeGrade(other._executeGrade), _isSigned(other._isSigned)
{
	std::cout << BYEL "Form copy constructor was called\n" RES;
}

/*-------------------------------Destructors---------------------------------*/

AForm::~AForm()
{
	std::cout << BRED << getName() << " form was destroyed\n" RES;
}

/*------------------------------Operators------------------------------------*/

AForm& AForm::operator = (const AForm& other)
{
	std::cout << CYA "Form copy assignment operator was called\n" RES;
	if (this != &other)
	{
		this->_isSigned = other._isSigned;
	}
	return (*this);
}

std::ostream& operator << (std::ostream& output, const AForm& f)
{
	output << CYA "Form " << f.getName() << " was created with the details: \n"
				<< "Grade required to sign: " << f.getSignGrade() << "\n"
				<< "Grade required to execute: " << f.getExecuteGrade() << "\n"
				<< "The form is signed: " << (f.getIsSigned() ? "true" : "false") << "\n" RES;
	return (output);
}

/*-----------------------------Member Functions------------------------------*/

const std::string	AForm::getName() const
{
	return (this->_name);
}

int	AForm::getSignGrade() const
{
	return (this->_signGrade);
}

int	AForm::getExecuteGrade() const
{
	return (this->_executeGrade);
}

bool	AForm::getIsSigned() const
{
	return (this->_isSigned);
}

void	AForm::beSigned(const Bureaucrat& b)
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

void	AForm::execute(Bureaucrat const & executor) const
{
	if (!getIsSigned())
		throw FormNotExecutableException();
	if (executor.getGrade() > this->_executeGrade)
		throw GradeTooLowException();
	childExecute();
}

/*----------------------------Exception Classes------------------------------*/

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("\033[31;1mError: Grade too high\033[0m");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("\033[31;1mError: Grade too low\033[0m");
}

const char* AForm::FormAlreadySigned::what() const throw()
{
	return ("\033[31;1mError: Form is already signed\033[0m");
}

const char* AForm::FormNotExecutableException::what() const throw()
{
	return ("\033[31;1mError: Form is not signed\033[0m");
}
