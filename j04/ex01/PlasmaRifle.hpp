// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PlasmaRifle.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:02:19 by mcanal            #+#    #+#             //
//   Updated: 2015/06/19 15:41:38 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PLASMARIFLE_HPP

/*
** defines
*/
# define PLASMARIFLE_HPP

/*
** includes
*/
# include "AWeapon.hpp"

/*
** class
*/
class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const &copy);
		virtual ~PlasmaRifle(void);

		void			attack(void) const;
		PlasmaRifle		&operator=(PlasmaRifle const &copy);

	private:
		
};

#endif //PLASMARIFLE_HPP
