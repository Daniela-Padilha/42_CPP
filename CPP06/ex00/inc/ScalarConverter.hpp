/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:22:01 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/23 17:04:31 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>
# include <iostream>

class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter& const other);
		~ScalarConverter();

		ScalarConverter& operator = (ScalarConverter& const other);
	public:
		static void convert(const std::string& value);
};

// -----------Colours-----------

# define RES "\033[0m"
# define BRED "\033[31;1m"
# define BGRN "\033[32;1m"
# define BYEL "\033[33;1m"
# define CYA "\033[0;36m"
# define BMAG "\033[35;1m"

#endif