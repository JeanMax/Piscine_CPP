// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 19:27:33 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 21:32:14 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

/*
** private
*/
void		 Human::meleeAttack(std::string const &target)
{
	std::cout << "meleeAttack to " << target << std::endl;
}

void		 Human::rangedAttack(std::string const &target)
{
	std::cout << "rangedAttack to " << target << std::endl;
}

void		 Human::intimidatingShout(std::string const &target)
{
	std::cout << "intimidatingShout to " << target << std::endl;
}

/*
** public
*/
void		 Human::action(std::string const &action_name,
                           std::string const &target)
{
	FunctionPointer f[3] = {
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};

    (this->*f[static_cast<int>(action_name.c_str()[0])])(target);
}
