// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:04:19 by mcanal            #+#    #+#             //
//   Updated: 2015/06/19 15:51:13 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Enemy.hpp"

/*
** constructor
*/
Enemy::Enemy(void)
{

}

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type)
{

}

Enemy::Enemy(Enemy const &copy)
{
	*this = copy;
}

/*
** destructor
*/
Enemy::~Enemy(void)
{

}

/*
** operator overload
*/
Enemy					&Enemy::operator=(Enemy const &copy)
{
	this->_type = copy._type;
	this->_hp = copy._hp;

	return *this;
}

/*
** public
*/
void					Enemy::takeDamage(int damage)
{
	if (damage > 0)
		this->_hp = this->_hp - damage > 0 ? this->_hp - damage : 0;
}

/*
** getter/setter
*/
std::string const		&Enemy::getType(void) const	{ return this->_type; }
int						Enemy::getHP(void) const	{ return this->_hp; }
