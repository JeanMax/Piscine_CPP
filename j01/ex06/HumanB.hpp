// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 14:41:03 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 17:30:52 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANB_HPP

/*
** defines
*/
# define HUMANB_HPP

/*
** includes
*/
# include "Weapon.hpp"

/*
** class
*/
class HumanB
{
	public:
		HumanB(std::string const &name, Weapon &w);
        HumanB(std::string const &name = "NamelessHumanB");
		~HumanB(void);
        
		void			attack(void)	const;
        void            setWeapon(Weapon &w);

	private:
		std::string     _name;
		Weapon      	*_w;
};

#endif //HUMANB_HPP
