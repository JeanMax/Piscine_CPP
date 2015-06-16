// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/07 22:35:09 by mcanal            #+#    #+#             //
//   Updated: 2015/06/08 22:11:05 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_HPP

/*
** defines
*/
# define ZOMBIE_HPP

/*
** includes
*/
# include <iostream>

/*
** class
*/
class Zombie
{
	public:
		Zombie(std::string const &name = "Nameless Zombie", \
			   std::string const &type = "Typeless Zombie");
		~Zombie(void);
		void	announce(void) const;

	private:
		std::string		_name;
		std::string		_type;
};

#endif //ZOMBIE_HPP
