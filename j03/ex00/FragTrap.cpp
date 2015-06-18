// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 10:55:11 by mcanal            #+#    #+#             //
//   Updated: 2015/06/18 13:32:20 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

/*
** constructor
*/
FragTrap::FragTrap(std::string const &name) : _name(name),
											  _hp(100),		_hpMax(100),
											  _mp(100),		_mpMax(100),
											  _lvl(1),		_armor(5),
											  _melee(30),	_ranged(20)
{
	std::cout << "Jack: FragTrap " << this->_name 
			  << " -- start bootup sequence. (default)" << std::endl
			  << "FragTrap " << this->_name 
			  << ": Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl
			  << "Jack: No no no no! Cancel directive three!" << std::endl
			  << "FragTrap " << this->_name 
			  << ": Commencing directive three! Uhntssuhntssuhntss--" 
			  << std::endl << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy) : _name(copy._name),
										   _hp(copy._hp),	_hpMax(copy._hpMax),
										   _mp(copy._mp),	_mpMax(copy._mpMax),
										   _lvl(copy._lvl),
										   _armor(copy._armor),
										   _melee(copy._melee),
										   _ranged(copy._ranged)
{
	std::cout << "Jack: FragTrap " << this->_name 
			  << " -- start bootup sequence. (copy)" << std::endl
			  << "FragTrap " << this->_name 
			  << ": Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl
			  << "Jack: No no no no! Cancel directive three!" << std::endl
			  << "FragTrap " << this->_name 
			  << ": Commencing directive three! Uhntssuhntssuhntss--" 
			  << std::endl << std::endl;
}

/*
** destructor
*/
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name
			  << ": I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

/*
** operator overload
*/
FragTrap		&FragTrap::operator=(FragTrap const &copy)
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
void			FragTrap::rangedAttack(std::string const &target) const
{
	std::cout << "FR4G-TP " << this->_name
			  << " attacks " << target
			  << " at range, causing " << this->_ranged
			  << " points of damage !" << std::endl;
}

void			FragTrap::meleeAttack(std::string const &target) const
{
	std::cout << "FR4G-TP " << this->_name
			  << " attacks " << target
			  << " with his own hands, causing " << this->_melee
			  << " points of damage !" << std::endl;

}

void			FragTrap::takeDamage(unsigned int amount)
{
	amount -= this->_armor <= amount ? this->_armor : amount;
	this->_hp -= amount <= this->_hp ? amount : this->_hp;

	std::cout << "FR4G-TP " << this->_name
			  << " takes " << amount
			  << " points of damage !" << std::endl;
}

void			FragTrap::beRepaired(unsigned int amount)
{
	this->_hp += amount;
	if (this->_hp > this->_hpMax)
		this->_hp = this->_hpMax;

	std::cout << "FR4G-TP " << this->_name
			  << " has been repaired " << amount
			  << " hit points !" << std::endl;
}

void			FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->_mp < 25)
	{
		std::cout << "FR4G-TP " << this->_name
				  << ": Not enough mana." << std::endl;
		return ;
	}

	std::string     t[] = { "Bandit", "Dahl", "Hyperion", "Jakobs", "Maliwan",
							"Tediore", "Torgue", "Vladof", "E-tech" };
//    srand(static_cast<unsigned int>(time(NULL))); //TODO: bjorked?

	this->_mp -= 25;

	std::cout << "FR4G-TP " << this->_name
			  << " attacks " << target
			  << " with " << t[rand() % static_cast<int>(sizeof(t) / sizeof(*t))]
			  << ", causing " << rand() % 50
			  << " points of damage !" << std::endl;
}

void			FragTrap::debug(void) const
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
