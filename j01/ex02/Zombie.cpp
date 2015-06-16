// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 12:07:13 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 12:29:36 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

Zombie::Zombie(std::string const &name, std::string const &type) : \
				_name(name), _type(type)
{
	std::cout << "Zombie " << this->_name << " constructed." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " destructed." << std::endl;
}

void Zombie::announce(void)	const
{
	std::cout << "<" << this->_name \
			  << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}
