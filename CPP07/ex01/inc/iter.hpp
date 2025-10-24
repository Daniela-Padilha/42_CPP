/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:30:47 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/24 23:45:37 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename A, typename B> void iter(A *arr, const int size, B func)
{
	if (size <= 0)
	{
		std::cout << BRED "Error: invalid size" RES << std::endl;
		return ;
	}
	if (!arr)
	{
		std::cout << BRED "Error: invalid pointer" RES << std::endl;
		return ;
	}
	for (int i = 0; i < size, i++)
		func(arr[i]);
}

// -----------Colours-----------

# define RES "\033[0m"
# define BRED "\033[31;1m"
# define BGRN "\033[32;1m"
# define BYEL "\033[33;1m"
# define CYA "\033[0;36m"
# define BMAG "\033[35;1m"

#endif