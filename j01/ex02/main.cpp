// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/07 22:36:01 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 10:09:37 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"
#include <ctime>
#include <cstdlib>

static void		randomChump(void)
{
	ZombieEvent	ze = ZombieEvent();
	Zombie		*z;
	std::string	t[] = {"Alf", "Bob", "Carl", "Dan", "Ed", "Foo", "Gui"};

	ze.setZombieType("doh");
	z = ze.newZombie(t[rand() % (int)(sizeof(t) / sizeof(*t))]);
	z->	announce();
	delete z;
}

int				main(void)
{
	srand((unsigned int)time(NULL));

	for (char i = 0; i < 5; i++)
		randomChump();

	return (0);
}
