// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/09 03:27:35 by mcanal            #+#    #+#             //
//   Updated: 2015/06/09 03:44:20 by mcanal           ###   ########.fr       //
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

