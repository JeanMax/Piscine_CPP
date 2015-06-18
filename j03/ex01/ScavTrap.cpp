// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 10:57:50 by mcanal            #+#    #+#             //
//   Updated: 2015/06/18 14:26:24 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"

/*
** constructor
*/
ScavTrap::ScavTrap(std::string const &name) : _name(name),
											  _hp(100),		_hpMax(100),
											  _mp(50),		_mpMax(50),
											  _lvl(1),		_armor(3),
											  _melee(20),	_ranged(15)
{
	std::cout << "Default ScavTrap " << this->_name 
			  << ": Hey, check me out everybody! I'm dancin', I'm dancin'!"
			  << std::endl << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : _name(copy._name),
										   _hp(copy._hp),	_hpMax(copy._hpMax),
										   _mp(copy._mp),	_mpMax(copy._mpMax),
										   _lvl(copy._lvl),
										   _armor(copy._armor),
										   _melee(copy._melee),
										   _ranged(copy._ranged)
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
** operator overload
*/
ScavTrap		&ScavTrap::operator=(ScavTrap const &copy)
{
	this->_name = copy._name;
	this->_hp = copy._hp;
	this->_hpMax = copy._hpMax;
	this->_mp = copy._mp;
	this->_mpMax = copy._mpMax;
	this->_lvl = copy._lvl;
	this->_armor = copy._armor;
	this->_melee = copy._melee;
	this->_ranged = copy._ranged;

	return *this;
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

void			ScavTrap::takeDamage(unsigned int amount)
{
	amount -= this->_armor <= amount ? this->_armor : amount;
	this->_hp -= amount <= this->_hp ? amount : this->_hp;

	std::cout << "SC4V-TP " << this->_name
			  << " takes " << amount
			  << " points of damage !" << std::endl;
}

void			ScavTrap::beRepaired(unsigned int amount)
{
	this->_hp += amount;
	if (this->_hp > this->_hpMax)
		this->_hp = this->_hpMax;

	std::cout << "SC4V-TP " << this->_name
			  << " has been repaired " << amount
			  << " hit points !" << std::endl;
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

void			ScavTrap::debug(void) const
{
	std::cout << "* name: " << this->_name
			  << ", hp: " << this->_hp << "/" << this->_hpMax
			  << ", mp: " << this->_mp << "/" << this->_mpMax
			  << ", lvl: " << this->_lvl
			  << ", melee: " << this->_melee
			  << ", ranged: " << this->_ranged
			  << ", armor: " << this->_armor 
			  << " *" << std::endl;
}
