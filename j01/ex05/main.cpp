// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/09 03:28:00 by mcanal            #+#    #+#             //
//   Updated: 2015/06/09 03:30:53 by mcanal           ###   ########.fr       //
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
