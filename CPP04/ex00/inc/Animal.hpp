/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 23:49:30 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/19 00:06:33 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal {
	protected:
		std::string _type;
	public:
		Animal();
		~Animal();
		Animal(const Animal& other);
		Animal& operator = (const Animal& other);

		void makeSound() const;
		std::string getType() const;
};

#endif