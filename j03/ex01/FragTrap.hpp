// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 10:55:22 by mcanal            #+#    #+#             //
//   Updated: 2015/06/18 13:59:35 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_HPP

/*
** defines
*/
# define FRAGTRAP_HPP

/*
** includes
*/
# include <iostream>
//# include <ctime> //TODO: bjorked?
# include <cstdlib> //rand

/*
** class
*/
class FragTrap
{
	public:
		FragTrap(std::string const &name = "FragTrap3000");
		FragTrap(FragTrap const &copy);
		~FragTrap(void);

		FragTrap		&operator=(FragTrap const &rhs);

		void			rangedAttack(std::string const &target) const;
		void			meleeAttack(std::string const &target) const;
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			vaulthunter_dot_exe(std::string const &target);

		void			debug(void) const;
		
	protected:
		std::string		_name;// (Parameter of constructor)
		unsigned int	_hp;// (100)
		unsigned int	_hpMax;// (100)
		unsigned int	_mp;// (100)
		unsigned int	_mpMax;// (100)
		unsigned int	_lvl;// (1)
		unsigned int	_armor;// (5)
		unsigned int	_melee;// (30)
		unsigned int	_ranged;// (20)
};

#endif //FRAGTRAP_HPP
