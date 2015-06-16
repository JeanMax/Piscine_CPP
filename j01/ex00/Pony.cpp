// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/07 21:18:45 by mcanal            #+#    #+#             //
//   Updated: 2015/06/08 02:16:06 by mcanal           ###   ########.fr       //
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

void	Pony::hello(void)	const
{
	std::cout << "Greetings " << this->_name << "!" << std::endl;
}
