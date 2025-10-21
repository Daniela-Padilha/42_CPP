/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:16:12 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/21 22:03:46 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <exception>


class Intern {
	public: 
		Intern();
		Intern(const Intern& other);
		~Intern();

		Intern& operator = (const Intern& other);
		AForm*	makeForm(std::string formName, std::string formTarget);

		class WrongForm: public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

#endif