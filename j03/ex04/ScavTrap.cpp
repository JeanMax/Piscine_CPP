// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 10:57:50 by mcanal            #+#    #+#             //
//   Updated: 2015/06/18 15:36:53 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"

/*
** constructor
*/
ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name, "Scav")
{
	std::cout << "Default ScavTrap " << this->_name 
			  << ": Hey, check me out everybody! I'm dancin', I'm dancin'!"
			  << std::endl << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy)
{
	std::cout << "Copy ScavTrap " << this->_name 
			  << ": Hey, check me out everybody! I'm dancin', I'm dancin'!"
			  << std::endl << std::endl;
}

/*
** destructor
*/
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name
			  << ": My servos... are seizing..." << std::endl;
}

/*
** public
*/
void			ScavTrap::rangedAttack(std::string const &target) const
{
	std::cout << "SC4V-TP " << this->_name
			  << " attacks " << target
			  << " at range, causing " << this->_ranged
			  << " points of damage ! (whith a totally different custom message)" << std::endl;
}

void			ScavTrap::meleeAttack(std::string const &target) const
{
	std::cout << "SC4V-TP " << this->_name
			  << " attacks " << target
			  << " with his own hands, causing " << this->_melee
			  << " points of damage ! (whith a totally different custom message)" << std::endl;
}

void			ScavTrap::challengeNewcomer(void)
{
	if (this->_mp < 12)
	{
		std::cout << "SC4V-TP " << this->_name
				  << ": Not enough mana." << std::endl;
		return ;
	}

	std::string     t[] = { "I don't like this... this is making me nervous. Take a deep breath- I can't breathe! This is just a recording of someone breathing! It's not real! It's just making me more nervous!",
							"I'm detecting a motor unit malfunction... I can't move! I'm paralyzed with fear!" ,
							"Please don't shoot me, please don't shoot me, please don't shoot me!",
							"Turning off the optics... they can't see me...",
							"The traveler will protect me. The traveler will protect me." };
//    srand(static_cast<unsigned int>(time(NULL))); //TODO: bjorked?

	this->_mp -= 12;

	std::cout << "Oh no! SC4V-TP " << this->_name
			  << " is going for a crazy challenge. He's... " << std::endl
			  << "ScavTrap " << this->_name << ": "
			  << t[rand() % static_cast<int>(sizeof(t) / sizeof(*t))]
			  << std::endl << "Epic! ><" << std::endl;
}
