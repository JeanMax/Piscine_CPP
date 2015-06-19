// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RadScorpion.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:06:29 by mcanal            #+#    #+#             //
//   Updated: 2015/06/19 15:54:41 by mcanal           ###   ########.fr       //
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

		void			takeDamage(int damage);
		RadScorpion		&operator=(RadScorpion const &copy);

	private:

};

#endif //RADSCORPION_HPP
