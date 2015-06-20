// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AssaultTerminator.cpp                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:17:55 by mcanal            #+#    #+#             //
//   Updated: 2015/06/20 13:54:40 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AssaultTerminator.hpp"

/*
** constructor
*/
AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &copy)
{
	*this = copy;
	std::cout << "* teleports from space *" << std::endl;
}

/*
** destructor
*/
AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I'll be back ..." << std::endl;
}

/*
** operator overload
*/
AssaultTerminator			&AssaultTerminator::operator=(AssaultTerminator const &copy)
{
	delete copy.clone(); //YAY!

	return *this;
}

/*
** public
*/
AssaultTerminator			*AssaultTerminator::clone(void) const
{
	return new AssaultTerminator(*this);
}

void					AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void					AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
}

void					AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
