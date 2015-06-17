// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 11:59:43 by mcanal            #+#    #+#             //
//   Updated: 2015/06/17 19:32:05 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.class.hpp"

int const		Fixed::_fractionnalBitsNb = 8;

/*
** constructor
*/
Fixed::Fixed(void) : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(Fixed const &toCopy) : _fixedPointValue(toCopy._fixedPointValue)
{
	std::cout << "Copy  constructor called" << std::endl;
}

/*
** destructor
*/
Fixed::~Fixed(void)
{

}

/*
** getter/setter
*/
int				Fixed::getRawBits(void)	const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
}
void			Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = static_cast<int>(
        roundf(static_cast<float>(raw << Fixed::_fractionnalBitsNb)));
}

/*
** public
*/
Fixed			&Fixed::operator=(Fixed const &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = copy._fixedPointValue;

	return *this;
}
