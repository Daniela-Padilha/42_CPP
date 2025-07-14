/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 22:33:21 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/07/13 22:33:26                                           */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string 	str= "HI THIS IS BRAIN";
	std::string* 	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "\033[36;1m --MEMORY ADDRESSES-- \033[0m" << std::endl;
	std::cout << "str: " << &str << std::endl;
	std::cout << "strPTR: " << stringPTR << std::endl;
	std::cout << "stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	
	std::cout << "\033[36;1m --VALUES-- \033[0m" << std::endl;
	std::cout << "str: " <<  str << std::endl;
	std::cout << "strPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
	return (0);
}
