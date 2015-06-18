// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 10:58:36 by mcanal            #+#    #+#             //
//   Updated: 2015/06/18 16:09:54 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CLAPTRAP_HPP

/*
** defines
*/
# define CLAPTRAP_HPP

/*
** includes
*/
# include <iostream>
//# include <ctime> //TODO: bjorked?
# include <cstdlib> //rand

/*
** class
*/
class ClapTrap
{
	public:
		ClapTrap(std::string const &name = "ClapTrap3000",
				 std::string const &type = "FragTrap");
		ClapTrap(ClapTrap const &copy);
		~ClapTrap(void);

		ClapTrap		&operator=(ClapTrap const &rhs);

		void			rangedAttack(std::string const &target) const;
		void			meleeAttack(std::string const &target) const;
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		getName(void)	const;

		void			debug(void) const;

	protected:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_hpMax;
		unsigned int	_mp;
		unsigned int	_mpMax;
		unsigned int	_lvl;
		unsigned int	_armor;
		unsigned int	_melee;
		unsigned int	_ranged;
};

#endif //CLAPTRAP_HPP
