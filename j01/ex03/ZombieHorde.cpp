// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 12:43:41 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 13:17:34 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(size_t count) : _z_count(count)
{
	std::string		t[] = {"Alf", "Bob", "Carl", "Dan", "Ed", "Foo", "Gui"};
	srand(static_cast<unsigned int>(time(NULL)));

	this->_z = new Zombie[count];

    do
	{
		this->_z[count - 1].setName(t[rand() % static_cast<int>(sizeof(t) / sizeof(*t))]);
		this->_z[count - 1].setType("BadassZombie");
	}
	while (count--);

	std::cout << "ZombieHorde (" << this->_z_count \
				<< " Zombies) constructed." << std::endl;
}

ZombieHorde::~ZombieHorde(void)
{
    delete[] this->_z;

	std::cout << "ZombieHorde destructed." << std::endl;
}

void	 ZombieHorde::announce(void) const
{
    for (size_t i = this->_z_count; i; i--)
		this->_z[i - 1].announce();
}
