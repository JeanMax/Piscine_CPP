// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 12:02:35 by mcanal            #+#    #+#             //
//   Updated: 2015/06/18 19:12:45 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_CLASS_HPP

/*
** defines
*/
# define FIXED_CLASS_HPP

/*
** includes
*/
# include <iostream>
# include <cmath>

/*
** class
*/
class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &toCopy);
		Fixed(const int fixedPointValue);
		Fixed(const float fixedPointValue);
		~Fixed(void);

		int					getRawBits(void)	const;
		void				setRawBits(int const raw);
		void				setRawBits(float const raw);

		float				toFloat(void) const;
		int					toInt(void) const;

		Fixed				&operator=(Fixed const &rhs);
		Fixed				operator+(Fixed const &rhs)	const;
		Fixed				operator-(Fixed const &rhs)	const;
		Fixed				operator*(Fixed const &rhs)	const;
		Fixed				operator/(Fixed const &rhs)	const;

		bool				operator>(Fixed const &rhs)	const;
		bool				operator>=(Fixed const &rhs)	const;
		bool				operator<(Fixed const &rhs)	const;
		bool				operator<=(Fixed const &rhs)	const;
		bool				operator==(Fixed const &rhs)	const;
		bool				operator!=(Fixed const &rhs)	const;

		Fixed				&operator++(void);
		Fixed				operator++(int);
		Fixed				&operator--(void);
		Fixed				operator--(int);

		static Fixed		&min(Fixed &fix1, Fixed &fix2);
		static Fixed const	&min(Fixed const &fix1, const Fixed &fix2);
		static Fixed		&max(Fixed &fix1, Fixed &fix2);
		static Fixed const	&max(Fixed const &fix1, const Fixed &fix2);


	private:
		int					_fixedPointValue; //TODO: find a pretty name
		static int const	_fractionnalBitsNb; //TODO: find a pretty name
};

/*
** prototypes
*/
std::ostream				&operator<<(std::ostream &o, Fixed const &rhs);

#endif //FIXED_CLASS_HPP
