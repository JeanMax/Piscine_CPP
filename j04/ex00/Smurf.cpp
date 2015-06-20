// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Smurf.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 23:49:09 by mcanal            #+#    #+#             //
//   Updated: 2015/06/20 22:31:53 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Smurf.hpp"

/*
** constructor
*/
Smurf::Smurf(std::string name) : Victim(name)
{
	std::cout << "Smurf on" << std::endl;
}

Smurf::Smurf(Smurf const &copy) : Victim(copy)
{
	std::cout << "Smurf on" << std::endl;
}

/*
** destructor
*/
Smurf::~Smurf(void)
{
	std::cout << "Smurf off" << std::endl;
}

/*
** public
*/
void					Smurf::getPolymorphed(void) const
{
	std::cout << this->_name
				<< " has been turned into something else !" << std::endl;
}
