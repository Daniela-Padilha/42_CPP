/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:47:14 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/08/04 20:48:51 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

# define RES "\033[0m"
# define BRED "\033[31;1m"
# define BGRN "\033[32;1m"
# define BYEL "\033[33;1m"
# define CYA "\033[0;36m"
# define BMAG "\033[35;1m"

class Cure : public AMateria
{
private:
	std::string _type;
public:
	Cure();
	Cure(Cure& const other);
	~Cure();
	Cure& operator = (Cure& const other);

	void setType(std::string& type);
	Cure* clone() const;
	void use(ICharacter& target);
};


#endif