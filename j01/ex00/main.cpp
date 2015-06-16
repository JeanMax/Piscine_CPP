// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 11:30:44 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 12:11:54 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"

static void		ponyOnTheStack(void)
{
	std::cout << std::endl << "- In Stack. -" << std::endl;

	Pony	pony = Pony("StackPony");
    pony.doStuff();

	std::cout << "- Almost Out Stack. -" << std::endl;
}

static void		ponyOnTheHeap(void)
{
	std::cout << std::endl << "- In Heap. -" << std::endl;

	Pony	*pony = new Pony("HeapPony");
	pony->doStuff();
	delete pony;

	std::cout << "- Almost Out Heap. -" << std::endl;
}

int				main(void)
{
	ponyOnTheStack();
	std::cout << "- Out Stack. -" << std::endl;

	ponyOnTheHeap();
	std::cout << "- Out Heap. -" << std::endl << std::endl;

	return (0);
}
