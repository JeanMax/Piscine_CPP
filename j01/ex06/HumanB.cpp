// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 14:41:57 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 17:31:53 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanB.hpp"

/*
** constructor
*/
HumanB::HumanB(std::string const &name, Weapon &w) : _name(name)
{
	std::cout << "Dangerous HumanB " << this->_name << " constructed." << std::endl;
    this->setWeapon(w);
}
HumanB::HumanB(std::string const &name) : _name(name)
{
	std::cout << "Naked HumanB " << this->_name << " constructed." << std::endl;
}

/*
** destructor
*/
HumanB::~HumanB(void)
{
	std::cout << "HumanB " << this->_name << " destructed." << std::endl;
}

/*
** public
*/
void    		HumanB::attack(void)	const
{
    std::cout << this->_name << " attacks with his " \
              << this->_w->getType() << "." << std::endl;
}

/*
** getter/setter
*/
void            HumanB::setWeapon(Weapon &w)
{
    this->_w = &w;

    std::cout << this->_name << " equips " << w.getType() << "." << std::endl;
}
