/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:47:37 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/19 16:35:30 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>

/*forward declaration*/
class Bureaucrat;

class Form {
	private:
		const std::string 	_name;
		const int			_signGrade;
		const int			_executeGrade;
		bool				_isSigned;
		
	public:
		Form();
		Form(std::string name, int signGrade, int executeGrade);
		Form(const Form& other);
		~Form();
		
		Form& operator = (const Form& other);
		
		const std::string		getName() const;
		int						getSignGrade() const;
		int						getExecuteGrade() const;
		bool					getIsSigned() const;
		void					beSigned(const Bureaucrat& b);
	
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