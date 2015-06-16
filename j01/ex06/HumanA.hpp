// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 14:40:38 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 17:30:32 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANA_HPP

/*
** defines
*/
# define HUMANA_HPP

/*
** includes
*/
# include "Weapon.hpp"

/*
** class
*/
class HumanA
{
	public:
		HumanA(std::string const &name, Weapon &w);
        HumanA(std::string const &name = "NamelessHumanA");
		~HumanA(void);
        
		void			attack(void)	const;
        void            setWeapon(Weapon &w);
        
	private:
		std::string     _name;
		Weapon          *_w;
};

#endif //HUMANA_HPP
