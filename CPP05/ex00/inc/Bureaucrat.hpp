/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 17:02:38 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/09/28 19:04:55 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat {
	private:
	const std::string 	_name;
	unsigned int		_grade;
	
	public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat& other);
	~Bureaucrat();
	
	Bureaucrat& operator = (const Bureaucrat& other);
	
	const std::string		getName() const;
	unsigned int			getGrade() const;
	unsigned int			increment();
	unsigned int			decrement();
	
	class GradeTooHighException: public std::exception
	{
		public:
		
	};

	class GradeTooLowException: public std::exception
	{
		public:
		
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