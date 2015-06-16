// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex01.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/07 22:11:07 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 10:05:25 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

void		memoryLeak(void)
{
	std::string	*panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;
	delete panthere;
}
