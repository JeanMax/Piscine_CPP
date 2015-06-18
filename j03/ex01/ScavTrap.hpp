// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 10:57:59 by mcanal            #+#    #+#             //
//   Updated: 2015/06/18 14:12:22 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_HPP

/*
** defines
*/
# define SCAVTRAP_HPP

/*
** includes
*/
# include <iostream>
//# include <ctime> //TODO: bjorked?
# include <cstdlib> //rand

/*
** class
*/
class ScavTrap
{
	public:
		ScavTrap(std::string const &name = "ScavTrap3000");
		ScavTrap(ScavTrap const &copy);
		~ScavTrap(void);

		ScavTrap		&operator=(ScavTrap const &rhs);

		void			rangedAttack(std::string const &target) const;
		void			meleeAttack(std::string const &target) const;
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			challengeNewcomer(void);

		void			debug(void) const;
		
	protected:
		std::string		_name;// (Parameter of constructor)
		unsigned int	_hp;// (100)
		unsigned int	_hpMax;// (100)
		unsigned int	_mp;// (50)
		unsigned int	_mpMax;// (50)
		unsigned int	_lvl;// (1)
		unsigned int	_armor;// (3)
		unsigned int	_melee;// (20)
		unsigned int	_ranged;// (15)
};

#endif //SCAVTRAP_HPP
