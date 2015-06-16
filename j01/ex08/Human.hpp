// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 19:27:14 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 21:33:27 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_HPP

/*
** defines
*/
# define HUMAN_HPP

/*
** enum
*/
enum zboub { MELEEATTACK, RANGEDATTACK, INTIMIDATINGSHOUT };

/*
** includes
*/
# include <iostream>

/*
** class
*/
class Human
{
	public:
		void	 action(std::string const &action_name, std::string const &target);

	private:
		void	 meleeAttack(std::string const &target);
		void	 rangedAttack(std::string const &target);
		void	 intimidatingShout(std::string const &target);

};

/*
** typedef
*/
typedef void    (Human::*FunctionPointer)(std::string const &target);

#endif //HUMAN_HPP
