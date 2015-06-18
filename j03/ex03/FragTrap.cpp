// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 10:55:11 by mcanal            #+#    #+#             //
//   Updated: 2015/06/18 15:30:36 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

/*
** constructor
*/
FragTrap::FragTrap(std::string const &name) : ClapTrap(name, "Frag")
{
	std::cout << "Jack: FragTrap " << this->_name 
			  << " -- start bootup sequence. (default)" << std::endl
			  << "FragTrap " << this->_name 
			  << ": Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl
			  << "Jack: No no no no! Cancel directive three!" << std::endl
			  << "FragTrap " << this->_name 
			  << ": Commencing directive three! Uhntssuhntssuhntss--" 
			  << std::endl << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy)
{
	std::cout << "Jack: FragTrap " << this->_name 
			  << " -- start bootup sequence. (copy)" << std::endl
			  << "FragTrap " << this->_name 
			  << ": Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl
			  << "Jack: No no no no! Cancel directive three!" << std::endl
			  << "FragTrap " << this->_name 
			  << ": Commencing directive three! Uhntssuhntssuhntss--" 
			  << std::endl << std::endl;
}

/*
** destructor
*/
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name
			  << ": I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

/*
** public
*/
void			FragTrap::rangedAttack(std::string const &target) const
{
	std::cout << "FR4G-TP " << this->_name
			  << " attacks " << target
			  << " at range, causing " << this->_ranged
			  << " points of damage !" << std::endl;
}

void			FragTrap::meleeAttack(std::string const &target) const
{
	std::cout << "FR4G-TP " << this->_name
			  << " attacks " << target
			  << " with his own hands, causing " << this->_melee
			  << " points of damage !" << std::endl;
}

void			FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->_mp < 25)
	{
		std::cout << "FR4G-TP " << this->_name
				  << ": Not enough mana." << std::endl;
		return ;
	}

	std::string     t[] = { "Bandit", "Dahl", "Hyperion", "Jakobs", "Maliwan",
							"Tediore", "Torgue", "Vladof", "E-tech" };
//    srand(static_cast<unsigned int>(time(NULL))); //TODO: bjorked?

	this->_mp -= 25;

	std::cout << "FR4G-TP " << this->_name
			  << " attacks " << target
			  << " with " << t[rand() % static_cast<int>(sizeof(t) / sizeof(*t))]
			  << ", causing " << rand() % 50
			  << " points of damage !" << std::endl;
}
