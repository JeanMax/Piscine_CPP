// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 13:33:09 by mcanal            #+#    #+#             //
//   Updated: 2015/06/17 19:54:55 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

Human::Human(void)
{
	std::cout << "Human constructed." << std::endl;
}

Human::~Human(void)
{
	std::cout << "Human destructed." << std::endl;
}

std::string		Human::identify(void)	const
{
	return this->_b.identify();
}

Brain const		&Human::getBrain(void)	const
{
	return this->_b;
}

