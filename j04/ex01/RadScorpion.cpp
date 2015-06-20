// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RadScorpion.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:06:17 by mcanal            #+#    #+#             //
//   Updated: 2015/06/20 01:40:49 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "RadScorpion.hpp"

/*
** constructor
*/
RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
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
