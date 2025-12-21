/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 19:33:27 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/12/21 00:24:34 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>
# include <exception>
# include <sstream>
# include <cctype>

class RPN {
    private:
        std::stack<int> _nbrs;
    public:
        RPN();
        RPN(const RPN &other);
        ~RPN();
        RPN& operator=(const RPN &other);

        void parse(const std::string& s);
        bool isNumber(const std::string& s);
        bool isSign(const std::string& s);
        void solve(char sign);
        
        class Error: public std::exception {
            public:
                virtual const char* what() const throw();
    };
};

// -----------Colours-----------

# define RES "\033[0m"
# define BRED "\033[31;1m"
# define BGRN "\033[32;1m"
# define BYEL "\033[33;1m"
# define CYA "\033[0;36m"
# define BMAG "\033[35;1m"

#endif