// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/07 22:34:59 by mcanal            #+#    #+#             //
//   Updated: 2015/06/08 22:16:08 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_EVENT_HPP

/*
** defines
*/
# define ZOMBIE_EVENT_HPP

/*
** includes
*/
# include "Zombie.hpp"

/*
** class
*/
class ZombieEvent
{
	public:
		ZombieEvent(std::string const &type = "Basic");
		~ZombieEvent(void);
		Zombie	*newZombie(std::string const &name)		const;
		void	setZombieType(std::string const &type);

	private:
		std::string		_type;
};


#endif //ZOMBIE_EVENT_HPP
