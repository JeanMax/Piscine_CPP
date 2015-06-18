// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 10:55:38 by mcanal            #+#    #+#             //
//   Updated: 2015/06/18 17:16:00 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include "ClapTrap.hpp"

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
	std::cout << std::endl << "--- TEST 2 ---" << std::endl << std::endl;

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

static void test3()
{
	std::cout << std::endl << "--- TEST 3 ---" << std::endl << std::endl;

	NinjaTrap ft1("Alf");
	NinjaTrap ft2("Bob");
	NinjaTrap ft3(ft1);

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

	ClapTrap c("c");
	FragTrap f("f");
	ScavTrap s("s");

	ft1.ninjaShoebox(c);
	ft1.ninjaShoebox(f);
	ft1.ninjaShoebox(s);
	ft1.ninjaShoebox(ft1);
	std::cout << std::endl;	
}

static void test4()
{
	std::cout << std::endl << "--- TEST 4 ---" << std::endl << std::endl;

	SuperTrap ft1("Alf");
	SuperTrap ft2("Bob");
	SuperTrap ft3(ft1);

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

	ClapTrap c("c");
	FragTrap f("f");
	ScavTrap s("s");
	NinjaTrap n("n");

	ft1.ninjaShoebox(c);
	ft1.ninjaShoebox(f);
	ft1.ninjaShoebox(s);
	ft1.ninjaShoebox(n);
	std::cout << std::endl;	
	
	for (char i = 0; i < 5; i++)
	{
		ft2.vaulthunter_dot_exe("Alf");
		ft2.debug();
	}
	std::cout << std::endl;	
}

int		main(int ac, char **av)
{
	if (ac == 1)
	{
		test1();
		test2();		
		test3();		
		test4();		
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
		case '3':
			test3();
			break;
		case '4':
			test4();
			break;
		}

	}


	return (0);
}
