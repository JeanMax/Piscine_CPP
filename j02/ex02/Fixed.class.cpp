// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 11:59:43 by mcanal            #+#    #+#             //
//   Updated: 2015/06/17 15:50:29 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.class.hpp"

int const			Fixed::_fractionnalBitsNb = 8;

/*
** constructor
*/
Fixed::Fixed(void) : _fixedPointValue(0)
{

}

Fixed::Fixed(Fixed const &toCopy) : _fixedPointValue(toCopy._fixedPointValue)
{
}

Fixed::Fixed(const int fixedPointValue)
{
	this->setRawBits(fixedPointValue);
}

Fixed::Fixed(const float fixedPointValue)
{
	this->setRawBits(fixedPointValue);
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
int					Fixed::getRawBits(void)	const
{
	return this->_fixedPointValue;
}

void				Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = static_cast<int>(
		raw * pow(2, Fixed::_fractionnalBitsNb) );
}

void				Fixed::setRawBits(float const raw)
{
	this->_fixedPointValue = static_cast<int>(
		raw * pow(2, Fixed::_fractionnalBitsNb) );
}

/*
** operator overload
*/
std::ostream		&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}

Fixed				&Fixed::operator=(Fixed const &rhs)
{
	this->_fixedPointValue = rhs._fixedPointValue;

	return *this;
}

Fixed				Fixed::operator+(Fixed const &rhs)	const
{
	Fixed result;

	result._fixedPointValue = this->_fixedPointValue + rhs._fixedPointValue;
	return result;
}

Fixed				Fixed::operator-(Fixed const &rhs)	const
{
	Fixed result;

	result._fixedPointValue = this->_fixedPointValue - rhs._fixedPointValue;
	return result;
}

Fixed				Fixed::operator*(Fixed const &rhs)	const
{
	Fixed result;

	result._fixedPointValue = this->_fixedPointValue * rhs._fixedPointValue;
	return result;
}

Fixed				Fixed::operator/(Fixed const &rhs)	const
{
	Fixed result;

	result._fixedPointValue = this->_fixedPointValue / rhs._fixedPointValue;
	return result;
}

bool				Fixed::operator>(Fixed const &rhs)	const
{
	return this->_fixedPointValue > rhs._fixedPointValue;
}

bool				Fixed::operator>=(Fixed const &rhs)	const
{
	return this->_fixedPointValue >= rhs._fixedPointValue;
}

bool				Fixed::operator<(Fixed const &rhs)	const
{
	return this->_fixedPointValue < rhs._fixedPointValue;
}

bool				Fixed::operator<=(Fixed const &rhs)	const
{
	return this->_fixedPointValue <= rhs._fixedPointValue;
}

bool				Fixed::operator==(Fixed const &rhs)	const
{
	return this->_fixedPointValue == rhs._fixedPointValue;
}

bool				Fixed::operator!=(Fixed const &rhs)	const
{
	return this->_fixedPointValue != rhs._fixedPointValue;
}

Fixed				&Fixed::operator++(void)
{
	this->_fixedPointValue++;
	return *this;
}

Fixed				Fixed::operator++(int)
{
	Fixed beforeInc(*this);

	this->operator++();
	return *this;
}

Fixed				&Fixed::operator--(void)
{
	this->_fixedPointValue--;
	return *this;
}

Fixed				Fixed::operator--(int)
{
	Fixed beforeInc(*this);

	this->operator--();
	return *this;
}


/*
** static
*/
Fixed				&Fixed::min(Fixed &fix1, Fixed &fix2)
{
	return fix1 > fix2 ? fix2 : fix1;
}

Fixed const			&Fixed::min(Fixed const &fix1, const Fixed &fix2)
{
	return fix1 > fix2 ? fix2 : fix1;
}

Fixed				&Fixed::max(Fixed &fix1, Fixed &fix2)
{
	return fix1 < fix2 ? fix2 : fix1;
}

Fixed const			&Fixed::max(Fixed const &fix1, const Fixed &fix2)
{
	return fix1 < fix2 ? fix2 : fix1;
}


/*
** public
*/
float			 Fixed::toFloat(void) const
{
	return static_cast<float>(
		this->_fixedPointValue / pow(2, Fixed::_fractionnalBitsNb) );
}

int				 Fixed::toInt(void) const
{
	return static_cast<int>(
		this->_fixedPointValue / pow(2, Fixed::_fractionnalBitsNb) );
}