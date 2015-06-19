// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWeapon.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:01:04 by mcanal            #+#    #+#             //
//   Updated: 2015/06/19 15:31:46 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AWeapon.hpp"

/*
** constructor
*/
AWeapon::AWeapon(void)
{

}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : 
	_name(name), _apcost(apcost), _damage(damage)
{

}

AWeapon::AWeapon(AWeapon const &copy)
{
	*this = copy;
}

/*
** destructor
*/
AWeapon::~AWeapon(void)
{

}

/*
** operator overload
*/
AWeapon				&AWeapon::operator=(AWeapon const &rhs)
{
	this->_name = rhs.getName();
	this->_apcost = rhs.getAPCost();
	this->_damage = rhs.getDamage();

	return *this;
}

/*
** getter/setter
*/
std::string const	&AWeapon::getName(void) const	{ return this->_name; }
int					AWeapon::getAPCost(void) const	{ return this->_apcost; }
int					AWeapon::getDamage(void) const	{ return this->_damage; }
