// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 12:42:57 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 13:17:26 by mcanal           ###   ########.fr       //
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
		Zombie(std::string	const &name = "NamelessZombie",
				std::string	const &type = "TypelessZombie");
		~Zombie(void);
		void	announce(void) const;
		void	setName(std::string const &name);
		void	setType(std::string const &type);

	private:
		std::string		_name;
		std::string		_type;
};

#endif //ZOMBIE_HPP
