// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 10:55:38 by mcanal            #+#    #+#             //
//   Updated: 2015/06/18 13:15:59 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap ft1("Alf");
	FragTrap ft2("Bob");
	FragTrap ft3(ft1);
	std::cout << std::endl;


	ft1.debug();
	ft2.debug();
	ft3.debug();
	std::cout << std::endl;

	ft3 = ft2;
	ft1.debug();
	ft2.debug();
	ft3.debug();
	std::cout << std::endl;

	ft1.rangedAttack("Bob");
	ft1.debug();
	ft2.debug();
	std::cout << std::endl;

	ft1.meleeAttack("Bob");
	ft1.debug();
	ft2.debug();
	std::cout << std::endl;

	ft1.takeDamage(3);
	ft1.debug();
	ft2.debug();
	std::cout << std::endl;

	ft1.beRepaired(3);
	ft1.debug();
	ft2.debug();
	std::cout << std::endl;

	ft1.takeDamage(1000);
	ft1.debug();
	ft2.debug();
	std::cout << std::endl;

	ft1.beRepaired(1000);
	ft1.debug();
	ft2.debug();
	std::cout << std::endl;

	ft1.vaulthunter_dot_exe("1");
	ft1.debug();
	ft1.vaulthunter_dot_exe("2");
	ft1.debug();
	ft1.vaulthunter_dot_exe("3");
	ft1.debug();
	ft1.vaulthunter_dot_exe("4");
	ft1.debug();
	ft1.vaulthunter_dot_exe("5");
	ft1.debug();
	std::cout << std::endl;

	return (0);
}
