// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Array.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/24 18:42:01 by mcanal            #+#    #+#             //
//   Updated: 2015/06/24 19:25:11 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <stdexcept>
#include <iostream>

template <typename T>
class Array
{
	protected:
		T				*_stuff;
		unsigned int	_len;

	public:
		/*
		** constructor
		*/
		Array(unsigned int n = 0) : _stuff(new T[n]), _len(n)
		{

		}

		Array(Array const &copy)
		{
			*this = copy;
		}

		/*
		** destructor
		*/
		~Array(void)
		{
			delete[] this->_stuff;
		}

		/*
		** operator overload
		*/
		Array			&operator=(Array const &copy)
		{
			delete[] this->_stuff;

			this->_stuff = new T[copy._len];
			this->_len = copy._len;

			for (unsigned int i = 0; i < this->_len; i++)
				this->_stuff[i] = copy._stuff[i];

			return *this;
		}

		T				&operator[](unsigned int i) const
		{
			if (i < 0 || i >= this->_len) //default throw a std::bad_alloc, whatever...
				throw std::runtime_error("Array[]: error. (out of bounds)");

			return this->_stuff[i];
		}

		/*
		** public
		*/
		unsigned int	size(void) const
		{		
			return this->_len;
		}
};
