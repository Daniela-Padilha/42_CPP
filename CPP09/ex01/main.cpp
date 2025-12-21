/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 19:33:31 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/12/21 00:36:55                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/RPN.hpp"

int main(int ac, char **av) {
    RPN rpn;
    if (ac != 2) {
        std::cerr << "Please insert the expected argument." << std::endl;
        return 1;
    }
    try {
        std::string s(av[1]);
        rpn.parse(s);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}

// test examples:
// "8 9 * 9 - 9 - 9 - 4 - 1 +" == 42
// "7 7 * 7 -" == 42
// "1 2 * 2 / 2 * 2 4 - +" == 0
// ./RPN "   3   4   +   " == 7
// "(1 + 1)" == error
// ./RPN "+ 3 4" == error
// ./RPN "3 4 + +" == error
// ./RPN "1 2 3 +" == error
// ./RPN "1 2 a" == error