/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 21:59:44 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/24 22:27:44 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WAHTEVER_HPP

template <typename T> void swap(T &value1, T &value2)
{
	T temp = value1;
	value1 = value2;
	value2 = temp;
};

template <typename A> A const &min(A &value1, A &value2)
{
	if (value1 < value2)
		return (value1);
	else
		return (value2);	
};

template <typename T> T const &max(T &value1, T &value2)
{
	if (value1 > value2)
		return (value1);
	else
		return (value2);
};

#endif