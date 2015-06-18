// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperTrap.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 10:59:29 by mcanal            #+#    #+#             //
//   Updated: 2015/06/18 17:15:20 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "SuperTrap.hpp"

/*
** constructor
*/
SuperTrap::SuperTrap(std::string const &name) : ClapTrap(name, "Super"), 
												FragTrap(),
												NinjaTrap()
{
	std::cout << "It's a Bird...It's a Plane...It's Default SuperTrap "
			  << this->_name << "!"
			  << std::endl << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &copy) : ClapTrap(copy),
											  FragTrap(),
											  NinjaTrap()
{
	std::cout << "It's a Bird...It's a Plane...It's Copied SuperTrap "
			  << this->_name << "!"
			  << std::endl << std::endl;
}

/*
** destructor
*/
SuperTrap::~SuperTrap(void)
{
	std::cout << "SuperTrap " << this->_name
			  << " never die! SuperTrap never... *DESTRUCTED*." << std::endl;
}
