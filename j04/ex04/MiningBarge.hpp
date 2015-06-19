// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   MiningBarge.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:35:23 by mcanal            #+#    #+#             //
//   Updated: 2015/06/18 00:37:23 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef MININGBARGE_HPP

/*
** defines
*/
# define MININGBARGE_HPP

/*
** includes
*/
//# include <iostream>

/*
** class
*/
class MiningBarge
{
	public:
		void equip(IMiningLaser*);
		void mine(IAsteroid*) const;
};

#endif //MININGBARGE_HPP
