/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 20:01:00 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/08/02 20:04:11 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

class AMateria
{
	protected:
		/* data */
	public:
		AMateria();
		AMateria(const AMateria& other);
		AMateria(std::string const & type);
		~AMateria();
		AMateria& operator = (AMateria& other);

		std::string const & getTyper() const;
		virtual AMateria* clone() const = 0;
		virtual void use (ICharacter& target);
};

AMateria::AMateria(/* args */)
{
}

AMateria::~AMateria()
{
}


#endif