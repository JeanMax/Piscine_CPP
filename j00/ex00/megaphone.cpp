// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   megaphone.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/15 10:48:04 by mcanal            #+#    #+#             //
//   Updated: 2015/06/15 12:23:19 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int		main(const int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	av++;
	while (*av)
	{
		while (**av)
		{
			std::cout << ((**av >= 'a' && **av <= 'z') ? **av - 32 : **av);
			(*av)++;
		}
		av++;
	}

	std::cout << std::endl;
	return (0);
}
