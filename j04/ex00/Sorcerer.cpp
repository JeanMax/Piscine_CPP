// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 23:48:35 by mcanal            #+#    #+#             //
//   Updated: 2015/06/19 13:38:47 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Sorcerer.hpp"

/*
** constructor
*/
Sorcerer::Sorcerer(void)
{
	//TODO: wtf?
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name),
															_title(title)
{
	std::cout << this->_name << ", "
				<< this->_title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &copy)
{
	*this = copy; //TODO: test

	std::cout << this->_name << ", "
				<< this->_title << ", is born !" << std::endl;
}

/*
** destructor
*/
Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title
				<< ", is dead. Consequences will never be the same !"
				<< std::endl;
}

/*
** operator overload
*/
std::ostream			&operator<<(std::ostream &o,
								   Sorcerer const &rhs)
{
	o << "I am " << rhs.getName()
		<< ", " << rhs.getTitle()
		<< ", and I like ponies !" << std::endl;

	return o;
}

Sorcerer				&Sorcerer::operator=(Sorcerer const &copy)
{
	this->_name = copy._name;
	this->_title = copy._title;

	return *this;
}

/*
** getter/setter
*/
std::string				Sorcerer::getName(void) const	{ return this->_name; }
std::string				Sorcerer::getTitle(void) const	{ return this->_title; }

/*
** public
*/
void					Sorcerer::polymorph(Victim const &v) const
{
	v.getPolymorphed();
}
