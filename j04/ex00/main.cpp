// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 23:48:12 by mcanal            #+#    #+#             //
//   Updated: 2015/06/19 12:35:34 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Victim.hpp"
#include "Peon.hpp"
#include "Sorcerer.hpp"

int		main(void)
{
	Sorcerer	robert("Robert", "the Magnificent");
	Victim		jim("Jimmy");
	Peon		joe("Joe");

	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

//TODO: test derived classes
	return (0);
}
