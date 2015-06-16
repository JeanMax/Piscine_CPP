// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 12:07:09 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 12:29:33 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string const &type) : _type(type)
{
	std::cout << "ZombieEvent constructed." << std::endl;
}

ZombieEvent::~ZombieEvent(void)
{
	std::cout << "ZombieEvent destructed." << std::endl;
}

Zombie			*ZombieEvent::newZombie(std::string const &name)	const
{
	return new Zombie(name, this->_type);
}

void			ZombieEvent::setZombieType(std::string const &type)
{
	this->_type = type;
}
