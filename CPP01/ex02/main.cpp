/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 22:33:21 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/07/28 18:53:48 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#define RES "\033[0m"
#define BCYA "\033[36;1m"

int	main(void)
{
	std::string 	str= "HI THIS IS BRAIN";
	std::string* 	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << BCYA "  	  --MEMORY ADDRESSES-- " RES << std::endl;
	std::cout << "	str: " << &str << std::endl;
	std::cout << "	strPTR: " << stringPTR << std::endl;
	std::cout << "	stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	
	std::cout << BCYA "	      --VALUES-- " RES << std::endl;
	std::cout << "	str: " <<  str << std::endl;
	std::cout << "	strPTR: " << *stringPTR << std::endl;
	std::cout << "	stringREF: " << stringREF << std::endl;
	return (0);
}
