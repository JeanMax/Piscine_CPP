// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 12:43:05 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 13:17:30 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_HORDE_HPP

/*
** defines
*/
# define ZOMBIE_HORDE_HPP

/*
** includes
*/
# include "Zombie.hpp"
# include <cstdlib> //srand()
# include <ctime> //time()

/*
** class
*/
class ZombieHorde
{
	public:
		ZombieHorde(size_t count = 1);
		~ZombieHorde(void);

		void	announce(void) const;

	private:
		size_t	_z_count;
		Zombie	*_z;
};


#endif //ZOMBIE_HORDE_HPP
