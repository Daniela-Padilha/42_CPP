/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 12:38:13 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/30 17:46:34 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

# define RES "\033[0m"
# define BRED "\033[31;1m"
# define BGRN "\033[32;1m"
# define BYEL "\033[33;1m"
# define CYA "\033[0;36m"
# define BMAG "\033[35;1m"

class WrongAnimal {
	protected:
		std::string _type;
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal& operator = (const WrongAnimal& other);

		void makeSound() const;
		std::string getType() const;
};

#endif