/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 17:02:38 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/09/29 19:36:04 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat {
	private:
		const std::string 	_name;
		unsigned int		_grade;
	
	public:
		Bureaucrat();
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat& other);
		~Bureaucrat();
	
		Bureaucrat& operator = (const Bureaucrat& other);
	
		const std::string		getName() const;
		unsigned int			getGrade() const;
		void					increment();
		void					decrement();
	
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator << (std::ostream& output, const Bureaucrat& b); 

// -----------Colours-----------

# define RES "\033[0m"
# define BRED "\033[31;1m"
# define BGRN "\033[32;1m"
# define BYEL "\033[33;1m"
# define CYA "\033[0;36m"
# define BMAG "\033[35;1m"

#endif