// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex04.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/09 03:10:09 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 13:17:55 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int		main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*ptr = &str;
	std::string		&ref = str;

	std::cout << str << std::endl \
			  << *ptr << std::endl \
			  << ref << std::endl;

	return (0);
}
