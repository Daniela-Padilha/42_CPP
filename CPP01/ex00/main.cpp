/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 13:19:52 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/23 18:51:24 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Zombie.hpp"

void	randomChump(std::string name);

int	main(void)
{
	Zombie 	stackzombie("Brian");
	std::string str = "Martha";
	
	std::cout << "\033[36;1m" << str << " is a zombie from the heap: \033[0m" << std::endl;
	randomChump(str);
	std::cout << std::endl;
	std::cout << "\033[36;1m" << stackzombie.getName()
		<< " is a zombie from the stack: \033[0m" << std::endl;
	stackzombie.announce();
	return (0);
}
