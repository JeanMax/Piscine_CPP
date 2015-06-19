// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperMutant.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:05:38 by mcanal            #+#    #+#             //
//   Updated: 2015/06/19 16:04:32 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "SuperMutant.hpp"

/*
** constructor
*/
SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &copy) : Enemy(copy)
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

/*
** destructor
*/
SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;
}

/*
** operator overload
*/
SuperMutant	 &SuperMutant::operator=(SuperMutant const &copy)
{
	Enemy::operator=(copy);

	return *this;
}

/*
** public
*/
void				SuperMutant::takeDamage(int damage)
{
/*
	damage -= 3;
	if (damage > 0)
		this->_hp = this->_hp - damage > 0 ? this->_hp - damage : 0;
*/
	Enemy::takeDamage(damage - 3); //TODO: test
}
