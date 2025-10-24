/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:33:56 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/24 22:00:56 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Serializer.hpp"
#include <iostream>

int main () {
	
	uintptr_t	originInt;
	Data		originStruct;
	Data*		newStruct;

	originStruct.msg = "This cpp is boring";

	std::cout << CYA "Before Serialize" RES << std::endl;
	std::cout << "Original pointer: " << &originStruct << std::endl;
	std::cout << "Original data: " << originStruct.msg << std::endl << std::endl;

	originInt = Serializer::serialize(&originStruct);

	std::cout << CYA "After Serialize" RES << std::endl;
	std::cout << "Int Result: " << originInt << std::endl << std::endl;

	newStruct = Serializer::deserialize(originInt);

	std::cout << CYA "After Deserialize" RES << std::endl;
	std::cout << "Converted pointer: " << newStruct << std::endl;
	std::cout << "Converted data: " << newStruct->msg << std::endl << std::endl;

	return (0);
}
