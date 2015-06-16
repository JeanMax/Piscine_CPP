// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/08 03:42:49 by mcanal            #+#    #+#             //
//   Updated: 2015/06/09 03:31:27 by mcanal           ###   ########.fr       //
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
		Zombie(std::string	const &name,// = "Nameless Zombie",
			   std::string	const &type,// = "Typeless Zombie",
			   Zombie		*prev);
		~Zombie(void);
		void	announce(void) const;
		Zombie	*getPrev(void) const;

	private:
		std::string		_name;
		std::string		_type;
		Zombie			*_prev;
};

#endif //ZOMBIE_HPP
