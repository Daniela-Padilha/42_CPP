/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:47:37 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/22 14:09:37 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <exception>

/*forward declaration*/
class Bureaucrat;

class AForm {
	private:
		const std::string 	_name;
		const int			_signGrade;
		const int			_executeGrade;
		bool				_isSigned;
		
	public:
		AForm();
		AForm(std::string name, int signGrade, int executeGrade);
		AForm(const AForm& other);
		virtual ~AForm();
		
		AForm& operator = (const AForm& other);
		
		const std::string	getName() const;
		int					getSignGrade() const;
		int					getExecuteGrade() const;
		bool				getIsSigned() const;
		
		void				beSigned(const Bureaucrat& b);
		void				execute(Bureaucrat const & executor) const;
		virtual void		childExecute() const = 0;
	
	class GradeTooHighException: public std::exception {
		public:
			virtual const char* what() const throw();
	};
	
	class GradeTooLowException: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class FormAlreadySigned: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class FormNotExecutableException: public std::exception {
		public:
			virtual const char* what() const throw();
	};
};

std::ostream& operator << (std::ostream& output, const AForm& f);

// -----------Colours-----------

# define RES "\033[0m"
# define BRED "\033[31;1m"
# define BGRN "\033[32;1m"
# define BYEL "\033[33;1m"
# define CYA "\033[0;36m"
# define BMAG "\033[35;1m"

#endif