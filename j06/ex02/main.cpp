// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/23 18:19:52 by mcanal            #+#    #+#             //
//   Updated: 2015/06/24 07:09:53 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdexcept>

class Base
{
	public:
		virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

static Base *generate(void)
{
	char	 c = rand() % 3;
	Base *b;

	if (!c)
		b = new A();
	else if (c == 1)
		b = new B();
	else
		b = new C();

	//std::cout << "testing: " << static_cast<char>(c + 'A') << std::endl; //debug
	return b;
}

static void	 identify_from_pointer(Base *p)
{
	A *a = dynamic_cast<A *>(p);

	if (a)
		std::cout << "A" << std::endl;
	else
	{
		B *b = dynamic_cast<B *>(p);

		if (b)
			std::cout << "B" << std::endl;
		else
			std::cout << "C" << std::endl;
	}
}

static void	 identify_from_reference(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);

		if (&a)
			std::cout << "A" << std::endl;
	}
	catch (std::exception &e)
	{
		try
		{
			B &b = dynamic_cast<B &>(p);

			if (&b)
				std::cout << "B" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "C" << std::endl;
		}
	}
}

int		main(void)
{
	srand(static_cast<unsigned int>(time(NULL)));
	Base *b;

	for (char c = 0; c < 10; c++) //c++, so it can't fail
	{
		b = generate();
		std::cout << "ref: ";
		identify_from_reference(*b);
		std::cout << "ptr: ";
		identify_from_pointer(b);
		delete b;
	}

	return (0);
}
