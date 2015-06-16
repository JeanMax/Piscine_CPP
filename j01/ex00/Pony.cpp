// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 11:30:49 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 11:35:06 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"

Pony::Pony(std::string const &name) : _name(name)
{
	std::cout << this->_name << " constructed." << std::endl;
}

Pony::~Pony(void)
{
	std::cout << this->_name << " destructed." << std::endl;
}

void	Pony::doStuff(void)	const
{
	std::cout << this->_name << " did some stuff." << std::endl;
}
