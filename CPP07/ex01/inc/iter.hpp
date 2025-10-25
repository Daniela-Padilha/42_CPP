/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:30:47 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/25 23:33:02 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

// -----------Colours-----------

# define RES "\033[0m"
# define BRED "\033[31;1m"
# define BGRN "\033[32;1m"
# define BYEL "\033[33;1m"
# define CYA "\033[0;36m"
# define BMAG "\033[35;1m"

template <typename A> void iter(A *arr, const int size, void (*func)(A &))
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
	for (int i = 0; i < size; i++)
		func(arr[i]);
}

template <typename A> void iter(const A *arr, const int size, void (*func)(A const &))
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
	for (int i = 0; i < size; i++)
		func(arr[i]);
}

template <typename T> void print(const T& arg)
{
	std::cout << arg << std::endl;
}

#endif