/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:00:03 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/11/05 19:31:26 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <exception>
# include <vector>
# include <climits>

// -----------Colours-----------

# define RES "\033[0m"
# define BRED "\033[31;1m"
# define BGRN "\033[32;1m"
# define BYEL "\033[33;1m"
# define CYA "\033[0;36m"
# define BMAG "\033[35;1m"

class Span {
	private:
		unsigned int		N;
		std::vector<int>	storage;
	public:
		Span();
		Span(unsigned int nbr);
		Span(const Span& other);
		~Span();

		Span& operator = (const Span& other);

		void addNumber(int nbr);
		int shortestSpan() const;
		int longestSpan() const;

		template <typename T> void addNumber(T begin, T end) {
			unsigned int sizeToAdd = std::distance(begin, end);
			if (storage.size() + sizeToAdd > N)
				throw std::runtime_error ("Error: not enough space on span");
			storage.insert(storage.end(), begin, end);
		}
};

#endif