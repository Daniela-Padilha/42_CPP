/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:47:37 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/18 18:33:02 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FROM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Form {
	private:
		const std::string 	_name;
		const unsigned int	_signGrade;
		const unsigned int	_executeGrade;
		bool				_isSigned;
		
	public:
		Form();
		Form(std::string name, unsigned int signGrade,
				unsigned int executeGrade, bool issigned);
		Form(const Form& other);
		~Form();
		
		Form& operator = (const Form& other);
		
		const std::string		getName() const;
		const unsigned int		getSignGrade() const;
		const unsigned int		getExecuteGrade() const;
		bool					getSigned() const;
		void					beSigned(Bureaucrat b);
	
	class GradeTooHighException: public std::exception {
		public:
			virtual const char* what() const throw();
	};
	
	class GradeTooLowException: public std::exception {
		public:
			virtual const char* what() const throw();
	};
};

std::ostream& operator << (std::ostream& output, const Form& f);

// -----------Colours-----------

# define RES "\033[0m"
# define BRED "\033[31;1m"
# define BGRN "\033[32;1m"
# define BYEL "\033[33;1m"
# define CYA "\033[0;36m"
# define BMAG "\033[35;1m"

#endif