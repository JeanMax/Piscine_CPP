// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 10:55:38 by mcanal            #+#    #+#             //
//   Updated: 2015/06/18 14:26:56 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

static void test1(void)
{
	std::cout << "--- TEST 1 ---" << std::endl << std::endl;

	FragTrap ft1("Alf");
	FragTrap ft2("Bob");
	FragTrap ft3(ft1);

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
	ft1.meleeAttack("Bob");
	std::cout << std::endl;

	ft1.takeDamage(3);
	ft1.debug();
	std::cout << std::endl;

	ft1.beRepaired(3);
	ft1.debug();
	std::cout << std::endl;

	ft1.takeDamage(50);
	ft1.debug();
	std::cout << std::endl;

	ft1.beRepaired(42);
	ft1.debug();
	std::cout << std::endl;

	ft1.takeDamage(1000);
	ft1.debug();
	std::cout << std::endl;

	ft1.beRepaired(1000);
	ft1.debug();
	std::cout << std::endl;

	for (char i = 0; i < 5; i++)
	{
		ft1.vaulthunter_dot_exe("Bob");
		ft1.debug();
	}
	std::cout << std::endl;	
}

static void test2()
{
	std::cout << "--- TEST 2 ---" << std::endl << std::endl;

	ScavTrap ft1("Alf");
	ScavTrap ft2("Bob");
	ScavTrap ft3(ft1);

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
	ft1.meleeAttack("Bob");
	std::cout << std::endl;

	ft1.takeDamage(3);
	ft1.debug();
	std::cout << std::endl;

	ft1.beRepaired(3);
	ft1.debug();
	std::cout << std::endl;

	ft1.takeDamage(50);
	ft1.debug();
	std::cout << std::endl;

	ft1.beRepaired(42);
	ft1.debug();
	std::cout << std::endl;

	ft1.takeDamage(1000);
	ft1.debug();
	std::cout << std::endl;

	ft1.beRepaired(1000);
	ft1.debug();
	std::cout << std::endl;

	for (char i = 0; i < 5; i++)
	{
		ft1.challengeNewcomer();
		std::cout << std::endl;		
	}
	std::cout << std::endl;		
}

int		main(int ac, char **av)
{
	if (ac == 1)
	{
		test1();
		test2();		
	}
	else
	{
		switch (av[1][0])
		{
		case '1':
			test1();
			break;
		case '2':
			test2();
			break;
		}

	}


	return (0);
}
