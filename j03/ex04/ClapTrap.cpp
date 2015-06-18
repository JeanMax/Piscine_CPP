// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 10:58:24 by mcanal            #+#    #+#             //
//   Updated: 2015/06/18 16:36:51 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"

/*
** constructor
*/
ClapTrap::ClapTrap(std::string const &name, std::string const &type) :
	_name(name),
	_hp(100),		_hpMax(100),
	_mp(100),		_mpMax(100),
	_lvl(1),		_armor(5),
	_melee(30),		_ranged(20)
{
	if (type == "Scav")
	{
		this->_mp = 50;
		this->_mpMax = 50;
		this->_armor = 3;
		this->_melee = 20;
		this->_ranged = 15;
	}
	else if (type == "Ninja")
	{
		this->_hp = 60;
		this->_hpMax = 60;
		this->_mp = 120;
		this->_mpMax = 120;
		this->_armor = 0;
		this->_melee = 60;
		this->_ranged = 5;
	}
	else if (type == "Super")
	{
		this->_hp = 100;
		this->_hpMax = 100;
		this->_mp = 120;
		this->_mpMax = 120;
		this->_armor = 5;
		this->_melee = 60;
		this->_ranged = 20;
	}

	std::cout << "Random ClapTrap " << this->_name
				<< " made." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy) : _name(copy._name),
											_hp(copy._hp),	_hpMax(copy._hpMax),
											_mp(copy._mp),	_mpMax(copy._mpMax),
											_lvl(copy._lvl),
											_armor(copy._armor),
											_melee(copy._melee),
											_ranged(copy._ranged)
{
	std::cout << "Random ClapTrap " << this->_name
				<< " copied." << std::endl;
}

/*
** destructor
*/
ClapTrap::~ClapTrap(void)
{
	std::cout << "Random ClapTrap " << this->_name
				<< " killed." << std::endl;
}

/*
** operator overload
*/
ClapTrap		&ClapTrap::operator=(ClapTrap const &copy)
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
void			ClapTrap::rangedAttack(std::string const &target) const
{
	std::cout << "CL4P-TP " << this->_name
				<< " attacks " << target
				<< " at range, causing " << this->_ranged
				<< " points of damage !" << std::endl;
}

void			ClapTrap::meleeAttack(std::string const &target) const
{
	std::cout << "CL4P-TP " << this->_name
				<< " attacks " << target
				<< " with his own hands, causing " << this->_melee
				<< " points of damage !" << std::endl;

}

void			ClapTrap::takeDamage(unsigned int amount)
{
	amount -= this->_armor <= amount ? this->_armor : amount;
	this->_hp -= amount <= this->_hp ? amount : this->_hp;

	std::cout << "CL4P-TP " << this->_name
				<< " takes " << amount
				<< " points of damage !" << std::endl;
}

void			ClapTrap::beRepaired(unsigned int amount)
{
	this->_hp += amount;
	if (this->_hp > this->_hpMax)
		this->_hp = this->_hpMax;

	std::cout << "CL4P-TP " << this->_name
				<< " has been repaired " << amount
				<< " hit points !" << std::endl;
}

void			ClapTrap::debug(void) const
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

/*
** getter/setter
*/
std::string		ClapTrap::getName(void)	const	{ return this->_name; }

