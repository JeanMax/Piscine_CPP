// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/07 22:35:47 by mcanal            #+#    #+#             //
//   Updated: 2015/06/08 22:26:57 by mcanal           ###   ########.fr       //
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
	return new Zombie(name);
}

void			ZombieEvent::setZombieType(std::string const &type)
{
	this->_type = type;
}
