// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 11:59:43 by mcanal            #+#    #+#             //
//   Updated: 2015/06/17 20:54:51 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.class.hpp"

int		 const		Fixed::_fractionnalBitsNb = 8;

/*
** constructor
*/
Fixed::Fixed(void) : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &toCopy) : _fixedPointValue(toCopy._fixedPointValue)
{
	std::cout << "Copy	constructor called" << std::endl;
}

Fixed::Fixed(const int fixedPointValue)
{
	this->setRawBits(fixedPointValue);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float fixedPointValue)
{
	this->setRawBits(fixedPointValue);
	std::cout << "Float constructor called" << std::endl;
}

/*
** destructor
*/
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
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
        roundf(static_cast<float>(raw << Fixed::_fractionnalBitsNb)) );
}

void			Fixed::setRawBits(float const raw)
{
    this->_fixedPointValue = static_cast<int>(
        roundf(raw * power(Fixed::_fractionnalBitsNb)) );
}

/*
** operator overload
*/
Fixed			&Fixed::operator=(Fixed const &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = copy._fixedPointValue;

	return *this;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &copy)
{
	o << copy.toFloat();
    return o;
}

/*
** public
*/
float			 Fixed::toFloat(void) const
{
	return static_cast<float>(this->_fixedPointValue) /
        static_cast<float>(power(Fixed::_fractionnalBitsNb));
}

int				 Fixed::toInt(void) const
{
	return this->_fixedPointValue / power(Fixed::_fractionnalBitsNb);
}

/*
** private
*/
int                 Fixed::power(int ex) const
{
    int result = 2;

    while (--ex > 0)
        result *= 2;

    return result;
}
