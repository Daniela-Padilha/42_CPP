/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 19:33:31 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/12/20 19:41:04 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/RPN.hpp"


bool parse(std::string s) {
    std::string signs = "+ - / *";
    
    if (!s.empty())
}

initRPN();
solve();

void start(std::string s) {
    if (!parse(s))
        throw RPN::Error();
    else if (!initRPN())
        throw RPN::Error();
    else if (!solve())
        throw RPN::Error();
}

int main(int ac, char **av) {
    if (ac != 1)
        std::cerr << "Please insert the expected argument." << std::endl;
    try {
        std:string s(av[1])
        start(s);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
