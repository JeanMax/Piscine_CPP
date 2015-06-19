// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PlasmaRifle.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:02:03 by mcanal            #+#    #+#             //
//   Updated: 2015/06/19 15:39:58 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PlasmaRifle.hpp"

/*
** constructor
*/
PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copy) : AWeapon(copy)
{
	
}

/*
** destructor
*/
PlasmaRifle::~PlasmaRifle(void)
{

}

/*
** operator overload
*/
PlasmaRifle				&PlasmaRifle::operator=(PlasmaRifle const &copy)
{
	AWeapon::operator=(copy);

	return *this;
}


/*
** public
*/
void					PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
