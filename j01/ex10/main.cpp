// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 01:16:25 by mcanal            #+#    #+#             //
//   Updated: 2015/06/17 01:39:29 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <fstream>

static void		output_file(std::string fileName)
{
	std::fstream file(fileName.c_str());

	if(file)
	{
		std::string	line;

		while (getline(file, line))
			std::cout << line << std::endl;
	}
	else
		std::cerr << "cat: " 
				  << fileName << ": No such file or directory" << std::endl;
}

static void		output_console(void)
{
	std::string	line;
	
	while (getline(std::cin, line))
		std::cout << line << std::endl;
}

int				main(const int ac, const char **av)
{
	if (ac == 1)
		output_console();

	av++;
	while (*av)
	{
		output_file(*av);
		av++;
	}

	return (0);
}
