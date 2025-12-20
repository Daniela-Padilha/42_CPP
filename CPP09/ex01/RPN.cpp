/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 19:33:33 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/12/20 19:24:37 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/RPN.hpp"

RPN::RPN() {}

RPN::RPN(_data) {
	
}

RPN::RPN(const RPN &other) {
	
}

RPN::~RPN() {}

RPN& RPN::operator=(const RPN &other) {
	
}

const char* RPN::Error::what() const throw() {
	return ("\033[31;1m Error \033[0m");
}