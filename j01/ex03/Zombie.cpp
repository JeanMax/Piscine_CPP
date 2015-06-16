// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/08 03:42:29 by mcanal            #+#    #+#             //
//   Updated: 2015/06/09 03:25:58 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

Zombie::Zombie(std::string	const &name,
			   std::string	const &type,
			   Zombie		*prev) :			\
	_name(name), _type(type), _prev(prev)
{
	std::cout << this->_name << " constructed." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " destructed." << std::endl;
}

void	 Zombie::announce(void)	const
{
	std::cout << "<" << this->_name \
				<< " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie	*Zombie::getPrev(void) const
{
	return this->_prev;
}
