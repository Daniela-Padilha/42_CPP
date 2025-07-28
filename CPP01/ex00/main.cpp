/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 13:19:52 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/28 18:42:48 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Zombie.hpp"

void	randomChump(std::string name);

int	main(void)
{
	Zombie 	stackzombie("Brian");
	std::string str = "Martha";
	
	std::cout << BCYA << str << " is a zombie from the heap: " RES << std::endl;
	randomChump(str);
	std::cout << std::endl;
	std::cout << BCYA << stackzombie.getName()
		<< " is a zombie from the stack: " RES << std::endl;
	stackzombie.announce();
	return (0);
}
