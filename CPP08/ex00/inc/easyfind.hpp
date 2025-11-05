/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 14:09:23 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/11/05 17:56:38 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <exception>
# include <iostream>
# include <algorithm>

// -----------Colours-----------

# define RES "\033[0m"
# define BRED "\033[31;1m"
# define BGRN "\033[32;1m"
# define BYEL "\033[33;1m"
# define CYA "\033[0;36m"
# define BMAG "\033[35;1m"

template <typename T> void easyfind(T& container, int val) {
	typename T::iterator it = std::find(container.begin(), container.end(), val);
	if (it != container.end())
			std::cout << BGRN "Found " << val << " in position " << std::distance(container.begin(), it) << RES << std::endl;
	else
		throw std::runtime_error("Error: No occurrence was found\n");
};

template <typename T> void easyfind(const T& container, int val) {
	typename T::const_iterator it = std::find(container.begin(), container.end(), val);
	if (it != container.end())
			std::cout << BGRN "Found " << val << " in position " << std::distance(container.begin(), it) << RES << std::endl;
	else
		throw std::runtime_error("Error: No occurrence was found\n");
};

#endif