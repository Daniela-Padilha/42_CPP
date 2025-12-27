/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 00:38:41 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/12/27 19:44:18 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <climits>
# include <exception>
# include <vector>
# include <deque>
# include <algorithm>
# include <ctime>

class PmergeMe {
	private:
		std::vector<std::pair<int, int> > _pairs;
		std::vector<int>				_vect;
		std::deque<int>					_deq;
		int								_leftover;
		bool							_hasLeftover;

		//Algorithm Vect
		void makePairsVect();
		void insertBigsVect();
		void insertSmallsVect();
		void insertLeftoverVect();

		//Algorithm Deq
		void makePairsDeq();
		void insertBigsDeq();
		void insertSmallsDeq();
		void insertLeftoverDeq();

		// Helpers
		void parse(char **av);
		void useVect();
		void useDeq();
		void sortInsidePairs();
		void sortPairs();

	public:
		PmergeMe();
		PmergeMe(const PmergeMe& other);
		~PmergeMe();
		PmergeMe& operator=(const PmergeMe& other);

		void start (char **av);

		class Error: public std::exception {
			virtual const char* what() const throw();
		};
};

#endif

