// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/23 18:19:52 by mcanal            #+#    #+#             //
//   Updated: 2015/06/24 05:07:33 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Var.class.hpp"
//#include <iostream>

int				main(const int ac, const char **av)
{
	if (ac != 2)
	{
		std::cerr << *av << ": One literal value needed" << std::endl;
		return -1;
	}

	Var		var(*(av + 1));

	if (var.type == ERROR)
	{
		std::cerr << *av << ": Unkown type" << std::endl;
		return -2;
	}

	try
	{
		std::cout << "char: '" << var.toChar() << "'" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "int: " << var.toInt() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "float: " << var.toFloat() << "f" << std::endl;
	} //TODO : print x.0f
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "double: " << var.toDouble() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	} //TODO : print x.0

	return 0;
}
