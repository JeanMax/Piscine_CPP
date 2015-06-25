// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   whatever.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/24 17:50:38 by mcanal            #+#    #+#             //
//   Updated: 2015/06/25 19:51:51 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

template <typename T>
static void	swap(T &a, T &b)
{
	T swap = a;

	a = b;
	b = swap;
}

template <typename T>
static T &min(T &a, T &b)
{
	return a < b ? a : b;
}

template <typename T>
static T &max(T &a, T &b)
{
	return a > b ? a : b;
}

class Test
{
	public:
		Test(int n) : i(n) {}
		bool operator>(Test &test) { return this->i > test.i; }
		bool operator<(Test &test) { return this->i < test.i; }
		int  i;
};

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
	int	const	 &min = ::min(a, b);
	int	const	 &max = ::max(a, b);

	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "a = " << &a << ", b = " << &b << std::endl;
	std::cout << "min( a, b ) = " << &min << std::endl;
	std::cout << "max( a, b ) = " << &max << std::endl;

	std::cout << std::endl << std::endl;

	Test *e = new Test(2);
	Test *f = new Test(3);

	::swap(e, f);
	std::cout << "e = " << e->i << ", f = " << f->i << std::endl;
	std::cout << "min( e, f ) = " << (::min(e, f))->i << std::endl;
	std::cout << "max( e, f ) = " << (::max(e, f))->i << std::endl;

	std::cout << std::endl << std::endl;

	Test g(2);
	Test h(3);

	::swap(g, h);
	std::cout << "g = " << g.i << ", h = " << h.i << std::endl;
	std::cout << "min( g, h ) = " << (::min(g, h)).i << std::endl;
	std::cout << "max( g, h ) = " << (::max(g, h)).i << std::endl;

	return 0;
}
