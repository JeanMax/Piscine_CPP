// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWeapon.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:00:04 by mcanal            #+#    #+#             //
//   Updated: 2015/06/19 15:06:39 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef AWEAPON_HPP

/*
** defines
*/
# define AWEAPON_HPP

/*
** includes
*/
# include <iostream>

/*
** class
*/
class AWeapon
{
	public:
		AWeapon(void);
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(AWeapon const &copy);
		virtual ~AWeapon(void); //TODO: why virtual?

		std::string const	&getName(void) const;
		int					getAPCost(void) const;
		int					getDamage(void) const;
		virtual void		attack(void) const = 0;

		AWeapon				&operator=(AWeapon const &copy);

	private:
		std::string			_name;
		int					_apcost;
		int					_damage;

		//TODO: "A weapon produces certain sounds and lighting effects when you attack() with it. This will be deferred to the inheriting classes."
};

#endif //AWEAPON_HPP
