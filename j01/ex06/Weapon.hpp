// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 14:41:15 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 17:31:48 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_HPP

/*
** defines
*/
# define WEAPON_HPP

/*
** includes
*/
# include <iostream>

/*
** class
*/
class Weapon
{
	public:
		Weapon(std::string const &type = "NamelessWeapon");
		~Weapon(void);

		std::string const &	getType(void)	const;
		void                setType(std::string const &type);

	private:
		std::string     	_type;
        
};

#endif //WEAPON_HPP
