// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 17:39:46 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 19:20:59 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <fstream>

static bool	 replace(std::string fn,
					 std::string const &s1,
					 std::string const &s2)
{
	if (!fn.length() || !s1.length() || !s2.length())
	{
		std::cerr << "Error: empty arg." << std::endl;
		return false;
	}

	std::ifstream	rStream(fn.c_str());
	fn += ".replace";
	std::ofstream	wStream(fn.c_str());
	if (!rStream || !wStream)
	{
		std::cerr << "Error: could not open file." << std::endl;
		return false;
	}

    
	size_t			i;
	while (getline(rStream, fn))    
	{
        i = 0;
        while ((i = fn.find(s1, i)) != std::string::npos)
        {
            fn.replace(i, s1.length(), s2);
            i += s2.length();
        }
		wStream << fn << std::endl;
	}

	return true;
}

int					 main(const int ac, const char **av)
{
	if (ac != 4)
	{
		std::cerr << "Error: 3 args needed (filename, search, replace)."
					<< std::endl;
		return (-1);
	}

	replace(*(av + 1), *(av + 2), *(av + 3));

	return (0);
}
