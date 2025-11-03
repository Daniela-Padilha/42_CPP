/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 14:11:36 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/11/01 17:29:51 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/easyfind.hpp"
#include <vector>
#include <list>

int main () {
	std::cout << BMAG "Testing with Vector" RES << std::endl;
	std::vector<int> nbrs = {1, 3, 6, 2, 9};
	::easyfind(nbrs, 6);

	std::cout << BMAG "Testing with List" RES << std::endl;
	std::list<int> myList = {42, 33, 56, 22, 99};
	::easyfind(myList, 42);
	return 0;
}
