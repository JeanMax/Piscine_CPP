// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 12:02:35 by mcanal            #+#    #+#             //
//   Updated: 2015/06/17 14:14:45 by mcanal           ###   ########.fr       //
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
		~Fixed(void);
		int					getRawBits(void)	const;
		void				setRawBits(int const raw);
		Fixed				&operator=(Fixed const &copy);

	private:
		int					_fixedPointValue; //TODO: find a pretty name
		static int const	_fractionnalBitsNb; //TODO: find a pretty name
};

#endif //FIXED_CLASS_HPP
