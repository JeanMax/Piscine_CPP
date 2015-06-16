// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 14:41:47 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 17:31:51 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanA.hpp"

/*
** constructor
*/
HumanA::HumanA(std::string const &name, Weapon &w) : _name(name)
{
	std::cout << "Dangerous HumanA " << this->_name << " constructed." << std::endl;
    this->setWeapon(w);
}
HumanA::HumanA(std::string const &name) : _name(name)
{
    std::cout << "Naked HumanA " << this->_name << " constructed." << std::endl;
}

/*
** destructor
*/
HumanA::~HumanA(void)
{
	std::cout << "HumanA " << this->_name << " destructed." << std::endl;
}

/*
** public
*/
void			HumanA::attack(void)	const
{
	std::cout << this->_name << " attacks with his " \
              << this->_w->getType() << "." << std::endl;
}

/*
** getter/setter
*/
void            HumanA::setWeapon(Weapon &w)
{
    this->_w = &w;

    std::cout << this->_name << " equips " << w.getType() << "." << std::endl;
}
