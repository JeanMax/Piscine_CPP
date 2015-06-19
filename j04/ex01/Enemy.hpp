// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:03:31 by mcanal            #+#    #+#             //
//   Updated: 2015/06/19 15:25:48 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ENEMY_HPP

/*
** defines
*/
# define ENEMY_HPP

/*
** includes
*/
# include <iostream>

/*
** class
*/
class Enemy
{
	public:
		Enemy(void);
		Enemy(int hp, std::string const &type);
		Enemy(Enemy const &copy);
		virtual ~Enemy(void);

		std::string const	&getType(void) const;
		int					getHP(void) const;
		virtual void		takeDamage(int damage);

		Enemy				&operator=(Enemy const &copy);

	private:
		int				_hp;
		std::string		_type;

};

#endif //ENEMY_HPP
