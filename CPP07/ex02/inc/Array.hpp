/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 23:36:07 by ddo-carm          #+#    #+#             */
/*   Updated: 2025/10/26 00:57:46 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

// -----------Colours-----------

# define RES "\033[0m"
# define BRED "\033[31;1m"
# define BGRN "\033[32;1m"
# define BYEL "\033[33;1m"
# define CYA "\033[0;36m"
# define BMAG "\033[35;1m"

template <typename T>
class Array {
	private:
		T* 				_array;
		unsigned int	_size;

	public:
		Array(): _array(NULL), _size(0) {
			std::cout << BGRN "Created Empty Array" RES << std::endl;
		}
		
		Array(unsigned int n) {
			if (n > 0)
			{
				_array = new T[n];
				_size = n;
				std::cout << BGRN "Created Array of size " << n << RES << std::endl;
			}
			else
			{
				_array = NULL;
				_size = 0;
				std::cout << BGRN "Created Array of size " << _size << RES << std::endl;
			}
		}

		Array (const Array& other): _size(other._size) {
			std::cout << BGRN "Array Copy Constructor called" RES << std::endl;
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = other._array[i];
		}

		~Array() {
			if (_array)
				delete[] _array;
			std::cout << BRED "Destroyed Array" RES << std::endl;
		}

		Array& operator = (const Array& other) {
			if (this != &other)
			{
				delete[] _array;
				_size = other._size;
				_array = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = other._array[i];
				
			}
			std::cout << BMAG "Array Assignment Operator called" RES << std::endl;
			return (*this);
		}

		T& operator [] (size_t index) {
			if (index >= _size)
				throw std::out_of_range("Index is out of range");
			return (_array[index]);
		}
		
		const T& operator [] (size_t index) const {
			if (index >= _size)
				throw std::out_of_range("Index is out of range");
			return (_array[index]);
		}

		unsigned int size() const {
			return (this->_size);
		}
};

#endif