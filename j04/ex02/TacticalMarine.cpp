// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   TacticalMarine.cpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:17:22 by mcanal            #+#    #+#             //
//   Updated: 2015/06/20 13:51:24 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "TacticalMarine.hpp"

/*
** constructor
*/
TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &copy)
{
	*this = copy;
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

/*
** destructor
*/
TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh ..." << std::endl;
}

/*
** operator overload
*/
TacticalMarine			&TacticalMarine::operator=(TacticalMarine const &copy)
{
	delete copy.clone(); //YAY!

	return *this;
}

/*
** public
*/
TacticalMarine			*TacticalMarine::clone(void) const
{
	return new TacticalMarine(*this);
}

void					TacticalMarine::battleCry(void) const
{
	std::cout << "For the holy PLOT !" << std::endl;
}

void					TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with bolter *" << std::endl;
}

void					TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with chainsword *" << std::endl;
}
