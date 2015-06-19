// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PowerFist.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:02:40 by mcanal            #+#    #+#             //
//   Updated: 2015/06/19 15:41:18 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PowerFist.hpp"

/*
** constructor
*/
PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{

}

PowerFist::PowerFist(PowerFist const &copy) : AWeapon(copy)
{
	
}

/*
** destructor
*/
PowerFist::~PowerFist(void)
{

}

/*
** operator overload
*/
PowerFist				&PowerFist::operator=(PowerFist const &copy)
{
	AWeapon::operator=(copy);

	return *this;
}


/*
** public
*/
void					PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
