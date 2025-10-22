/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:22:01 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/22 17:34:38 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>

class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter& const other);
		~ScalarConverter();

		ScalarConverter& operator = (ScalarConverter& const other);
	public:
		convert(std::string value);
};

#endif