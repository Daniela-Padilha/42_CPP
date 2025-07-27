/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 12:38:14 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/27 16:26:31 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat& other);
	WrongCat& operator = (const WrongCat& other);

	void makeSound() const;
};

#endif