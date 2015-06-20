// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RadScorpion.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:06:29 by mcanal            #+#    #+#             //
//   Updated: 2015/06/20 01:40:55 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef RADSCORPION_HPP

/*
** defines
*/
# define RADSCORPION_HPP

/*
** includes
*/
# include "Enemy.hpp"

/*
** class
*/
class RadScorpion : public Enemy
{
	public:
		RadScorpion(void);
		RadScorpion(RadScorpion const &copy);
		virtual ~RadScorpion(void);

		using			Enemy::takeDamage;
		RadScorpion		&operator=(RadScorpion const &copy);

	private:

};

#endif //RADSCORPION_HPP
