// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 12:43:47 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 13:17:43 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieHorde.hpp"

int				main(void)
{
	ZombieHorde *zh = new ZombieHorde(7);
    zh->announce();
	delete zh;

	return (0);
}
