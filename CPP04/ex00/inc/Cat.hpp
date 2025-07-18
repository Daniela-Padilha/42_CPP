/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 23:50:35 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/19 00:13:05 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include "Animal.hpp"

class Cat : public Animal {
	protected:
		std::string type;
	public:
		Cat();
		~Cat();
		Cat(const Cat& other);
		Cat& operator = (const Cat& other);

		void makeSound() const;
};

#endif