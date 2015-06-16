// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 12:06:57 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 12:29:20 by mcanal           ###   ########.fr       //
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
		ZombieEvent(std::string const &type = "TypelessZombie");
		~ZombieEvent(void);
		Zombie	*newZombie(std::string const &name)		const;
		void	setZombieType(std::string const &type);

	private:
		std::string		_type;
};


#endif //ZOMBIE_EVENT_HPP
