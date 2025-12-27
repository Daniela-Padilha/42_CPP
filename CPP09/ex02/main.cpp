/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 00:38:35 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/12/27 18:46:18                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/PmergeMe.hpp"

/*vector and deque -> allows random access, insertion in the middle 
						and binary search*/

/*1. make pairs
  2. sort inside each pair (small, big)
  3. sort between each pair big nbrs from small to big
  4. remove the big numbers from the pairs and put them together
  5. insert the small nbrs with binary search (middle -> choose half -> repeat)
  6. insert the straggler if any with binary search also
*/

int main (int ac, char **av) {
	if (ac < 2)
	{
		std::cerr << "Please insert the expected argument." << std::endl;
		return 1;
	}
	try {
		PmergeMe p;
		p.start(av);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
