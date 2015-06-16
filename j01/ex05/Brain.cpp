// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/09 03:27:18 by mcanal            #+#    #+#             //
//   Updated: 2015/06/09 04:03:13 by mcanal           ###   ########.fr       //
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
	std::cout << this;
	return (char *)this;
}
