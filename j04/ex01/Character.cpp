// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:08:00 by mcanal            #+#    #+#             //
//   Updated: 2015/06/20 01:47:45 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Character.hpp"

/*
** constructor
*/
Character::Character(void)
{
//	std::cout << *this;
}

Character::Character(std::string const &name) : _name(name), 
												_ap(40), 
												_weapon(NULL)
{
//	std::cout << *this;
}

Character::Character(Character const &copy)
{
	*this = copy;
}

/*
** destructor
*/
Character::~Character(void)
{

}

/*
** operator overload
*/
std::ostream			&operator<<(std::ostream &o, Character const &rhs)
{
	o << rhs.getName() << " has " << rhs.getAp() << " AP and "
	  << (rhs.getWeapon() ? "wields a " + rhs.getWeapon()->getName() : "is unarmed")
	  << std::endl;
	
	return o;
}

Character				&Character::operator=(Character const &copy)
{
	this->_name = copy._name;
	this->_ap = copy._ap;
	this->_weapon = copy._weapon;
	
	return *this;
}

/*
** public
*/
void					Character::recoverAP(void)
{
	this->_ap = this->_ap < 30 ? this->_ap + 10 : 40;
}

void					Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void					Character::attack(Enemy *enemy)
{
	if (this->_ap < this->_weapon->getAPCost() || !this->_weapon)
		return ;

	std::cout << this->_name << " attacks " 
			  << enemy->getType() << " with a " 
			  << this->_weapon->getName() << std::endl;

	this->_weapon->attack();

	this->_ap -= this->_weapon->getAPCost();

	enemy->takeDamage(this->_weapon->getDamage());
	if (!enemy->getHP())
		delete enemy;
}

/*
** getter/setter
*/
std::string const	&Character::getName(void) const	{ return this->_name; }
int					Character::getAp(void) const	{ return this->_ap; }
AWeapon				*Character::getWeapon(void) const{ return this->_weapon; }
