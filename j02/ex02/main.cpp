// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 11:57:49 by mcanal            #+#    #+#             //
//   Updated: 2015/06/17 21:09:55 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <Fixed.class.hpp>

int		main(void)
{
	Fixed	a;
	Fixed   b( Fixed( 5.05f ) + Fixed( 2 ));

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl << std::endl;

	std::cout << "a > b ? " << (a > b) << std::endl;
	std::cout << "a >= b ? " << (a >= b) << std::endl;
	std::cout << "a < b ? " << (a < b) << std::endl;
	std::cout << "a <= b ? " << (a <= b) << std::endl;
	std::cout << "a == b ? " << (a == b) << std::endl;
	std::cout << "a != b ? " << (a != b) << std::endl << std::endl;

	std::cout << "a + b ? " << (a + b) << std::endl;
	std::cout << "a - b ? " << (a - b) << std::endl;
	std::cout << "a * b ? " << (a * b) << std::endl;
	std::cout << "a / b ? " << (a / b) << std::endl << std::endl;

	std::cout << "a ? " << a << std::endl;
	std::cout << "++a ? " << ++a << std::endl;
	std::cout << "a ? " << a << std::endl;
	std::cout << "a++ ? " << a++ << std::endl;
	std::cout << "a ? " << a << std::endl << std::endl;

	std::cout << "b ? " << b << std::endl;
	std::cout << "++b ? " << ++b << std::endl;
	std::cout << "b ? " << b << std::endl;
	std::cout << "b++ ? " << b++ << std::endl;
	std::cout << "b ? " << b << std::endl << std::endl;

	std::cout << "max(a, b) ? " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a, b) ? " << Fixed::min(a, b) << std::endl;
	
	return (0);
}
