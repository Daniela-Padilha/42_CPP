/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:42:53 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/08/10 17:02:54 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria* _materias[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource& other);
		~MateriaSource();
		MateriaSource& operator = (MateriaSource& other);

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};

#endif