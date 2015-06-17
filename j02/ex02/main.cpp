// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 11:57:49 by mcanal            #+#    #+#             //
//   Updated: 2015/06/17 15:59:40 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <Fixed.class.hpp>

int		main(void)
{
	Fixed	a;
	Fixed   b( 10 );
	Fixed   c( 42.42f );
	Fixed   d( b );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a > b ? " << (a > b) << std::endl;
	std::cout << "a >= b ? " << (a >= b) << std::endl;
	std::cout << "a < b ? " << (a < b) << std::endl;
	std::cout << "a <= b ? " << (a <= b) << std::endl;
	std::cout << "a == b ? " << (a == b) << std::endl;
	std::cout << "a != b ? " << (a != b) << std::endl;

	std::cout << "a + b ? " << (a + b) << std::endl;
	std::cout << "a - b ? " << (a - b) << std::endl;
	std::cout << "a * b ? " << (a * b) << std::endl;
	std::cout << "a / b ? " << (a / b) << std::endl;

	std::cout << "a ? " << a << std::endl;
	std::cout << "a++ ? " << a++ << std::endl;
	std::cout << "a ? " << a << std::endl;
	std::cout << "++a ? " << ++a << std::endl;
	std::cout << "a ? " << a << std::endl;
	std::cout << "b ? " << b << std::endl;
	std::cout << "b++ ? " << b++ << std::endl;
	std::cout << "b ? " << b << std::endl;
	std::cout << "++b ? " << ++b << std::endl;
	std::cout << "b ? " << b << std::endl;

	std::cout << "max(a, b) ? " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a, b) ? " << Fixed::min(a, b) << std::endl;
	
	return (0);
}
