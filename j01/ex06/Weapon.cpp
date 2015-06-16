// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 14:42:06 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 17:31:56 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Weapon.hpp"

/*
** constructor
*/
Weapon::Weapon(std::string const &type) : _type(type)
{
	std::cout << "Weapon " << this->_type << " constructed." << std::endl;   
}

/*
** destructor
*/
Weapon::~Weapon(void)
{
	std::cout << "Weapon " << this->_type << " destructed." << std::endl;   
}

/*
** getter/setter
*/
std::string const & Weapon::getType(void) const { return this->_type; }
void                Weapon::setType(std::string const &type)
{
	std::cout << "Weapon set to " << type << "." << std::endl;   
    this->_type = type;
}
