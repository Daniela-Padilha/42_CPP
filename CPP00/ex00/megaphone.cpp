/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 12:05:20 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/06/28 12:13:58 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int ac, char **av)
{
	int i, j;

	if (ac == 1)
		std::cout << "* LOUD AND UNBERABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				std::cout << (char)toupper(av[i][j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
