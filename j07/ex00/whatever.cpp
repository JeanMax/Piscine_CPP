// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   whatever.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/24 17:50:38 by mcanal            #+#    #+#             //
//   Updated: 2015/06/24 18:29:14 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

template <typename T>
static void swap(T &a, T &b)
{
	T swap;

	swap = a;
	a = b;
	b = swap;
}

template <typename T>
static T const &min(T const &a, T const &b)
{
	return a < b ? a : b;
}

template <typename T>
static T const &max(T const &a, T const &b)
{
	return a > b ? a : b;	
}

int		main(void)
{
	int	a = 2;
	int	b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;


	std::cout << std::endl << std::endl;

	a = 2;
	b = 2;
	int const &min = ::min(a, b);
	int const &max = ::max(a, b);

	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "a = " << &a << ", b = " << &b << std::endl;
	std::cout << "min( a, b ) = " << &min << std::endl;
	std::cout << "max( a, b ) = " << &max << std::endl;

	return 0;
}
