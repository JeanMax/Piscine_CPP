// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 10:59:02 by mcanal            #+#    #+#             //
//   Updated: 2015/06/18 16:16:40 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "NinjaTrap.hpp"

/*
** constructor
*/
NinjaTrap::NinjaTrap(std::string const &name) : ClapTrap(name, "Ninja")
{
	std::cout << "Default NinjaTrap " << this->_name 
			  << ": ushhhhhh... NINJAAAAA!!!"
			  << std::endl << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &copy) : ClapTrap(copy)
{
	std::cout << "Copy NinjaTrap " << this->_name 
			  << ":  ushhhhhh... NINJAAAAA!!!"
			  << std::endl << std::endl;
}

/*
** destructor
*/
NinjaTrap::~NinjaTrap(void)
{
	std::cout << "NinjaTrap " << this->_name
			  << ": ninj-aïe :/" << std::endl;
}

/*
** public
*/
void			NinjaTrap::rangedAttack(std::string const &target) const
{
	std::cout << "N1NJ4-TP " << this->_name
			  << " attacks " << target
			  << " at range, causing " << this->_ranged
			  << " points of damage ! (whith another totally different custom message)" << std::endl;
}

void			NinjaTrap::meleeAttack(std::string const &target) const
{
	std::cout << "N1NJ4-TP " << this->_name
			  << " attacks " << target
			  << " with his own hands, causing " << this->_melee
			  << " points of damage ! (whith another totally different custom message)" << std::endl;
}

void			NinjaTrap::ninjaShoebox(ClapTrap const &target)
{
	if (this->_mp < 40)
	{
		std::cout << "N1NJ4-TP " << this->_name
				  << ": Not enough mana." << std::endl;
		return ;
	}

	std::string     t[] = { "dance!", "eat my shoes!",
							"chew what?", "hold my box..." };
//    srand(static_cast<unsigned int>(time(NULL))); //TODO: bjorked?
	this->_mp -= 40;

	std::cout << "N1NJ4-TP " << this->_name 
			  << ": Come here FATHERTRAP " << target.getName() << ", and "
			  << t[rand() % static_cast<int>(sizeof(t) / sizeof(*t))]
			  << std::endl;
}

void			NinjaTrap::ninjaShoebox(FragTrap const &target)
{
	if (this->_mp < 40)
	{
		std::cout << "N1NJ4-TP " << this->_name
				  << ": Not enough mana." << std::endl;
		return ;
	}

	std::string     t[] = { "dance!", "eat my shoes!",
							"chew what?", "hold my box..." };
//    srand(static_cast<unsigned int>(time(NULL))); //TODO: bjorked?
	this->_mp -= 40;

	std::cout << "N1NJ4-TP " << this->_name 
			  << ": Come here FRAGTRAP " << target.getName() << ", and "
			  << t[rand() % static_cast<int>(sizeof(t) / sizeof(*t))]
			  << std::endl;
}

void			NinjaTrap::ninjaShoebox(ScavTrap const &target)
{
	if (this->_mp < 40)
	{
		std::cout << "N1NJ4-TP " << this->_name
				  << ": Not enough mana." << std::endl;
		return ;
	}

	std::string     t[] = { "dance!", "eat my shoes!",
							"chew what?", "hold my box..." };
//    srand(static_cast<unsigned int>(time(NULL))); //TODO: bjorked?
	this->_mp -= 40;

	std::cout << "N1NJ4-TP " << this->_name 
			  << ": Come here SCAVTRAP " << target.getName() << ", and "
			  << t[rand() % static_cast<int>(sizeof(t) / sizeof(*t))]
			  << std::endl;
}

void			NinjaTrap::ninjaShoebox(NinjaTrap const &target)
{
	if (this->_mp < 40)
	{
		std::cout << "N1NJ4-TP " << this->_name
				  << ": Not enough mana." << std::endl;
		return ;
	}

	std::string     t[] = { "dance!", "eat my shoes!",
							"... chew what?", "hold my box..." };
//    srand(static_cast<unsigned int>(time(NULL))); //TODO: bjorked?
	this->_mp -= 40;

	std::cout << "N1NJ4-TP " << this->_name 
			  << ": Come here NINJATRAP " << target.getName() << ", and "
			  << t[rand() % static_cast<int>(sizeof(t) / sizeof(*t))]
			  << std::endl;
}
