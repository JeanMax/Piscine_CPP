// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 13:31:00 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 14:39:04 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

int		main(void)
{
	Human bob;

	std::cout << bob.identify() << std::endl \
			  << bob.getBrain().identify() << std::endl;

	return (0);
}
