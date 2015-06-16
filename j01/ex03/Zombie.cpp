// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 12:43:22 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 14:58:19 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

/*
** Constructor
*/
Zombie::Zombie(std::string const &name, std::string const &type) : \
	_name(name), _type(type)
{
	std::cout << "Zombie " << this->_name << " constructed." << std::endl;
}

/*
** Destructor
*/
Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " destructed." << std::endl;
}

/*
** public
*/
void        Zombie::announce(void)	const
{
	std::cout << "<" << this->_name \
				<< " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}

/*
** get/set
*/
void        Zombie::setName(std::string const &name) { this->_name = name; }
void        Zombie::setType(std::string const &type) { this->_type = type; }
