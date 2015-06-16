// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 12:07:03 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 17:23:33 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"
#include <ctime>
#include <cstdlib>

static void		randomChump(ZombieEvent const &ze)
{
	Zombie		*z;
	std::string	t[] = {"Alf", "Bob", "Carl", "Dan", "Ed", "Foo", "Gui"};

	z = ze.newZombie(t[rand() % static_cast<int>(sizeof(t) / sizeof(*t))]);
	z->announce();
	delete z;
}

int				main(void)
{
	ZombieEvent	ze = ZombieEvent();
	char i;
	srand(static_cast<unsigned int>(time(NULL)));

	std::cout << std::endl;

	for (i = 0; i < 3; i++)
		randomChump(ze), std::cout << std::endl;

	ze.setZombieType("BadassZombie");

	for (i = 0; i < 3; i++)
		randomChump(ze), std::cout << std::endl;

	return (0);
}
