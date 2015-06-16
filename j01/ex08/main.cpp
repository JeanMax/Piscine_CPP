// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 19:30:58 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 21:30:39 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

int		main(void)
{
    Human   bob;
    char    target[5] = "john";
    char    action[1];

    action[0] = MELEEATTACK;
    bob.action(action, target);

    action[0] = RANGEDATTACK;
    bob.action(action, target);

    action[0] = INTIMIDATINGSHOUT;
    bob.action(action, target);

    return (0);
}
