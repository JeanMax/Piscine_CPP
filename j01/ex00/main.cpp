// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/07 21:18:15 by mcanal            #+#    #+#             //
//   Updated: 2015/06/07 22:07:00 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"

static void		ponyOnTheStack(void)
{
	std::cout << std::endl << "- In Stack. -" << std::endl;

	Pony	pony = Pony("StackPony");
	pony.hello();

	std::cout << "- Out Stack. -" << std::endl;
}

static void		ponyOnTheHeap(void)
{
	std::cout << std::endl << "- In Heap. -" << std::endl;

	Pony	*pony = new Pony("HeapPony");
	pony->hello();
	delete pony;

	std::cout << "- Out Heap. -" << std::endl << std::endl;
}

int				main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}
