// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 11:57:49 by mcanal            #+#    #+#             //
//   Updated: 2015/06/17 13:19:01 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <Fixed.class.hpp>

int		main(void)
{	
	std::cout << "subject's main:" << std::endl;

	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;


	std::cout << std::endl << "another main:" << std::endl;
	
	a.setRawBits(4);
	b.setRawBits(2);
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;

	a = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	
	return (0);
}
