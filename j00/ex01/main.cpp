// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/15 11:32:29 by mcanal            #+#    #+#             //
//   Updated: 2015/06/15 12:40:08 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

/*

	commands are ADD, SEARCH, and EXIT
	nb contact max = 8
	search with id

*/

#include "Contact.class.hpp"

static void	 add(Contact conTab[])
{
	unsigned char	i;

	for (i = 0; i < 8; i++)
		if (!(conTab[i].exists()))
		{
			conTab[i].edit();
			break ;
		}

	std::cout << (i == 8 ? "FULL" : "ADDED") << std::endl;
}

static void	 search(Contact conTab[])
{
	unsigned char	i;

	std::cout << "     INDEX| FIRSTNAME|  LASTNAME|  NICKNAME" << std::endl;

	for (i = 0; i < 8; i++)
		if (conTab[i].exists())
			std::cout << "         " << i + 1 << "|", conTab[i].print(false);

	if (conTab[0].exists())
	{
        std::cout << "INDEX?" << std::endl;
		while (i < 0 || i > 7 || !(conTab[i].exists()))
		{
			std::cin >> i;
			i -= 49;
		}
		
		std::cout << "CONTACT " << i + 1 << ":" << std::endl;
		conTab[i].print();
	}
}

int		main(void)
{
	std::string	line;
	Contact		conTab[8];

	std::cout << "ADD/SEARCH/EXIT" << std::endl;
	while (getline(std::cin, line) && line != "EXIT")
		if (line == "ADD")
			add(conTab);
		else if (line == "SEARCH")
			search(conTab);
		else
			std::cout << "ADD/SEARCH/EXIT" << std::endl;

	std::cout << "KTHXBYE" << std::endl;
	return (0);
}
