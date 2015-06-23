// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/22 05:27:25 by mcanal            #+#    #+#             //
//   Updated: 2015/06/22 17:11:39 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat a("a", 5);
	Bureaucrat b("b", 147);

	try
	{
		Bureaucrat *c = new Bureaucrat("c", 1000);
		delete c;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	for (int i = 0; i < 8; i++)
	{
		try
		{
			a += 1;
			b -= 1;
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		std::cout << a;
		std::cout << b;
	}

	return (0);
}
