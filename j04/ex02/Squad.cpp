// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Squad.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:16:42 by mcanal            #+#    #+#             //
//   Updated: 2015/06/20 13:38:52 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Squad.hpp"

/*
** constructor
*/
Squad::Squad(void) :  _squad(0), _count(0)
{
	this->_squad = new ISpaceMarine*[SQUAD_SIZE]; //><
}

Squad::Squad(Squad const &copy)
{
	*this = copy;
}

/*
** destructor
*/
Squad::~Squad(void)
{
	for (int i = 0; i < this->_count; i++)
		delete this->_squad[i];
	delete[] this->_squad;
}

/*
** operator overload
*/
Squad					&Squad::operator=(Squad const &copy)
{
	int i;

	for (i = 0; i < copy._count; i++)
	{
		if (this->_squad[i])
			delete this->_squad[i];
		this->_squad[i] = copy._squad[i];
	}

	for (; i < this->_count; i++)
	{
		if (this->_squad[i])
			delete this->_squad[i];
		this->_squad[i] = NULL;
	}

	this->_count = copy._count;

	return *this;
}

/*
** getter/setter
*/
int						Squad::getCount(void) const
{
	return this->_count;
}

ISpaceMarine			*Squad::getUnit(int n)
{
	return 0 <= n && n < this->_count ? this->_squad[n] : NULL;
}

int						Squad::push(ISpaceMarine *unit)
{
	for (int i = 0; i < this->_count; i++)
		if (unit == this->_squad[i] || this->_count == SQUAD_SIZE) //TODO: test
		{
			unit = NULL;
			break;
		}

	if (unit != NULL)
		this->_squad[this->_count++] = unit;

	return this->_count;
}

