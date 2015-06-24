// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/24 19:08:03 by mcanal            #+#    #+#             //
//   Updated: 2015/06/24 20:02:37 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Array.template.hpp"
#include <iostream>

int		main(void)
{
	std::string		s_tab[] = { "toto", "tata", "tutu" };
	int				i_tab[] = { 1, 2, 3, 4, 5 };

	Array<std::string>	s_arr(sizeof(s_tab)/sizeof(*s_tab));
	Array<int>			i_arr(sizeof(i_tab)/sizeof(*i_tab));

	for (unsigned int i = 0; i < i_arr.size(); i++)
	{
		try
		{
			s_arr[i] = s_tab[i];
			i_arr[i] = i_tab[i];
			std::cout << s_arr[i] << " " << s_tab[i] << std::endl;
			std::cout << i_arr[i] << " " << i_tab[i] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	return (0);
}
