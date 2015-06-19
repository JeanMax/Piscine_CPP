// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:07:00 by mcanal            #+#    #+#             //
//   Updated: 2015/06/19 16:26:00 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CHARACTER_HPP

/*
** defines
*/
# define CHARACTER_HPP
# define AP_MAX 40

/*
** includes
*/
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

/*
** class
*/
class Character
{
	public:
		Character(void);
		Character(std::string const &name);
		Character(Character const &copy);
		~Character(void);

		std::string const	&getName(void) const;
		int					getAp(void)	const;
		AWeapon				*getWeapon(void)	const;

		void				recoverAP(void);
		void				equip(AWeapon *weapon);
		void				attack(Enemy *enemy);

		Character			&operator=(Character const &copy);

	private:
		std::string			_name;
		int					_ap;
		AWeapon				*_weapon;

};

/*
** prototypes
*/
std::ostream				&operator<<(std::ostream &o, Character const &rhs);

#endif //CHARACTER_HPP
