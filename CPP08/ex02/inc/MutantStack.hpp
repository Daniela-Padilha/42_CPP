/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 19:41:43 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/11/05 23:01:09 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>

// -----------Colours-----------

# define RES "\033[0m"
# define BRED "\033[31;1m"
# define BGRN "\033[32;1m"
# define BYEL "\033[33;1m"
# define CYA "\033[0;36m"
# define BMAG "\033[35;1m"

template <typename T>
class MutantStack: public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type::iterator 				iterator;
		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

		MutantStack() {}
		MutantStack(const MutantStack& other): std::stack<T>(other) {}
		~MutantStack() {}

		MutantStack& operator = (const MutantStack& other) {
			std::stack<T>::operator=(other);
			return (*this);
		}

		iterator begin() { return (this->c.begin()); }
		iterator end() { return (this->c.end()); }

		const_iterator begin() const { return (this->c.begin()); }
		const_iterator end() const { return (this->c.end()); }

		reverse_iterator rbegin() { return (this->c.rbegin()); }
		reverse_iterator rend() { return (this->c.rend()); }

		const_reverse_iterator rbegin() const { return (this->c.rbegin()); }
		const_reverse_iterator rend() const { return (this->c.rend()); }
};

#endif