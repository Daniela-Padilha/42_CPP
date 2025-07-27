/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 23:51:28 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/27 17:08:59 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain* _brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog& other);
		Dog& operator = (const Dog& other);

		void makeSound() const;
};

#endif