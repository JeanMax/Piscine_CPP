// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 23:48:57 by mcanal            #+#    #+#             //
//   Updated: 2015/06/19 13:38:54 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Victim.hpp"

/*
** constructor
*/
Victim::Victim(void)
{
	//TODO: wtf?
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name
				<< " just popped !" << std::endl;
}

Victim::Victim(Victim const &copy)
{
	*this = copy; //TODO: test

	std::cout << "Some random victim called " << this->_name
				<< " just popped !" << std::endl;
}

/*
** destructor
*/
Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name
				<< " just died for no apparent reason !" << std::endl;
}

/*
** operator overload
*/
std::ostream			&operator<<(std::ostream &o, Victim const &rhs)
{
	o << "I'm " << rhs.getName()
		<< " and i like otters !" << std::endl;

	return o;
}

Victim					&Victim::operator=(Victim const &copy)
{
	this->_name = copy._name;

	return *this;
}

/*
** getter/setter
*/
std::string				Victim::getName(void) const	{ return this->_name; }

/*
** public
*/
void					Victim::getPolymorphed(void) const
{
	std::cout << this->_name
				<< " has been turned into a cute little sheep !" << std::endl;
}
