// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RadScorpion.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:06:17 by mcanal            #+#    #+#             //
//   Updated: 2015/06/19 16:04:48 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "RadScorpion.hpp"

/*
** constructor
*/
RadScorpion::RadScorpion(void) : Enemy(170, "Super Mutant")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &copy) : Enemy(copy)
{
	std::cout << "* click click click *" << std::endl;
}

/*
** destructor
*/
RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
}

/*
** operator overload
*/
RadScorpion	 &RadScorpion::operator=(RadScorpion const &copy)
{
	Enemy::operator=(copy);

	return *this;
}

/*
** public
*/
/*
void				RadScorpion::takeDamage(int damage)
{
	if (damage > 0)
		this->_hp = this->_hp - damage > 0 ? this->_hp - damage : 0;
}
*/
