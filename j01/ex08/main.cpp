// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 19:30:58 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 23:58:16 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

int		main(void)
{
	Human	bob;
	char	target[5] = "john";
	char	action[1];

	*action = MELEEATTACK;
	bob.action(action, target);

	*action = RANGEDATTACK;
	bob.action(action, target);

	*action = INTIMIDATINGSHOUT;
	bob.action(action, target);

	return (0);
}
