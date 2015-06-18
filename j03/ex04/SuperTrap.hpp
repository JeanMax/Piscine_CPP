// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 10:59:40 by mcanal            #+#    #+#             //
//   Updated: 2015/06/18 17:15:06 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SUPERTRAP_HPP

/*
** defines
*/
# define SUPERTRAP_HPP

/*
** includes
*/
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

/*
** class
*/
class SuperTrap : virtual public ClapTrap, public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(std::string const &name = "SuperTrap3000");
		SuperTrap(SuperTrap const &copy);
		~SuperTrap(void);

		using FragTrap::debug;
		using FragTrap::rangedAttack;
		using NinjaTrap::meleeAttack;

/* Bjorked
	protected:
		using FragTrap::_hp;
		using FragTrap::_hpMax;
		using NinjaTrap::_mp;
		using NinjaTrap::_mpMax;
		using NinjaTrap::_melee;
		using FragTrap::_ranged;
		using FragTrap::_armor;
*/
};

#endif //SUPERTRAP_HPP
