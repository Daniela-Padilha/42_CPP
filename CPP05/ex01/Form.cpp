/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:47:41 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/18 18:41:33 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Form.hpp"

/*------------------------------Constructors---------------------------------*/

Form::Form(): _name("Undefined"), _signGrade(150), _executeGrade(150),
				_isSigned(false)
{
	std::cout << BGRN "A new form was created\n" RES;
}

Form::Form(std::string name, unsigned int signGrade,
				unsigned int executeGrade, bool issigned)
{
	
}

Form::Form(const Form& other)
{
	
}

/*-------------------------------Destructors---------------------------------*/

Form::~Form()
{
	std::cout << BRED << getName() << " form was destroyed" RES;
}

/*------------------------------Operators------------------------------------*/

Form& Form::operator = (const Form& other)
{
	
}

std::ostream& operator << (std::ostream& output, const Form& f)
{
	
}

/*-----------------------------Member Functions------------------------------*/

const std::string	Form::getName() const
{
	
}

const unsigned int	Form::getSignGrade() const
{
	
}

const unsigned int	Form::getExecuteGrade() const
{
	
}

bool	Form::getSigned() const
{
	
}

void	Form::beSigned(Bureaucrat b)
{
	
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
