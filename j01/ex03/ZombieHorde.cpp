// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/08 03:43:11 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 10:11:18 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(size_t count) : _z_count(count)
{
	Zombie			*swap = NULL;
	std::string		t[] = {"Alf", "Bob", "Carl", "Dan", "Ed", "Foo", "Gui"};	
	this->_z = NULL; //move in list?
	srand((unsigned int)time(NULL));

	while (count--)
	{
		swap = new Zombie(t[rand() % (int)(sizeof(t) / sizeof(*t))],
						  "Typeless Zombie",
						  this->_z);
		this->_z = swap;
	}

	this->announce();
	
	std::cout << "ZombieHorde (" << this->_z_count \
			  << " Zombies) constructed." << std::endl;	
}

ZombieHorde::~ZombieHorde(void)
{
	Zombie  *swap;

    while (this->_z)
    {
        swap = this->_z->getPrev();
		delete this->_z;
		this->_z = swap;
    }

	std::cout << "ZombieHorde destructed." << std::endl;
}

void	 ZombieHorde::announce(void) const
{
	Zombie	*swap = this->_z;

	while (swap)
	{
		swap->announce();
		swap = swap->getPrev();
	}
}
