// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   IMiningLaser.hpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:36:11 by mcanal            #+#    #+#             //
//   Updated: 2015/06/18 00:36:41 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef IMININGLASER_HPP

/*
** defines
*/
# define IMININGLASER_HPP

/*
** includes
*/
//# include <iostream>

/*
** class
*/
class IMiningLaser
{
	public:
		virtual ~IMiningLaser() {}
		virtual void mine(IAsteroid*) = 0;
};

#endif //IMININGLASER_HPP
