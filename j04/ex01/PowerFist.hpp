// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PowerFist.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:02:58 by mcanal            #+#    #+#             //
//   Updated: 2015/06/19 15:41:44 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef POWERFIST_HPP

/*
** defines
*/
# define POWERFIST_HPP

/*
** includes
*/
# include "AWeapon.hpp"

/*
** class
*/
class PowerFist : public AWeapon
{
	public:
        PowerFist(void);
        PowerFist(PowerFist const &copy);
        virtual ~PowerFist(void);

        void            attack(void) const;
        PowerFist     &operator=(PowerFist const &copy);

	private:

};

#endif //POWERFIST_HPP
