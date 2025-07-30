/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 23:50:35 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/30 18:01:08 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain* _brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat& other);
		Cat& operator = (const Cat& other);

		void makeSound() const;
};

#endif