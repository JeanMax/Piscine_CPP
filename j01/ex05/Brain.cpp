// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 13:33:16 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 14:38:59 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructed." << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructed." << std::endl;
}

std::string		Brain::identify(void)	const
{
	std::stringstream	address;

    address << this;

	return address.str();
}
