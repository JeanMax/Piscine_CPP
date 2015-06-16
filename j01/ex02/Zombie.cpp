// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/07 22:35:27 by mcanal            #+#    #+#             //
//   Updated: 2015/06/08 22:10:41 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

Zombie::Zombie(std::string const &name, std::string const &type) : \
				_name(name), _type(type)
{
	std::cout << this->_name << " constructed." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " destructed." << std::endl;
}

void Zombie::announce(void)	const
{
	std::cout << "<" << this->_name \
			  << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}
