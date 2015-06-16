// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 22:26:58 by mcanal            #+#    #+#             //
//   Updated: 2015/06/17 01:10:58 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Logger.hpp"

int		main(const int ac, const char **av)
{
	char	dest[1];
	Logger	log(ac > 1 && av[1][0] ? av[1] : LOG_FILE);

	*dest = TO_CONSOLE;
	log.log(dest, ac == 3 ? av[2] : "I'd love to log this into console!");

	*dest = TO_FILE;
	log.log(dest, ac == 3 ? av[2] : "I'd love to log this into file!");

	return (0);
}
