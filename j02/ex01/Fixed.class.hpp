// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 12:02:35 by mcanal            #+#    #+#             //
//   Updated: 2015/06/17 20:55:48 by mcanal           ###   ########.fr       //
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
		Fixed				&operator=(Fixed const &copy);
		float				toFloat(void) const;
		int					toInt(void) const;

	private:
		int					_fixedPointValue; //TODO: find a pretty name
		static int const	_fractionnalBitsNb; //TODO: find a pretty name
        int                 power(int ex) const;
};

/*
** prototypes
*/
std::ostream				&operator<<(std::ostream &o, Fixed const &copy);

#endif //FIXED_CLASS_HPP
