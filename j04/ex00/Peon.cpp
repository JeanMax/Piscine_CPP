// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 23:49:09 by mcanal            #+#    #+#             //
//   Updated: 2015/06/19 02:07:13 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Peon.hpp"

/*
** constructor
*/
Peon::Peon(void)
{
	//TODO: wtf?
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &copy) : Victim(copy)
{
	std::cout << "Zog zog." << std::endl;
}

/*
** destructor
*/
Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

/*
** public
*/
void					Peon::getPolymorphed(void) const
{
	std::cout << this->_name
				<< " has been turned into a pink pony !" << std::endl;
}
