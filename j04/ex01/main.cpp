// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 23:57:06 by mcanal            #+#    #+#             //
//   Updated: 2015/06/20 18:19:27 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Character.hpp"

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

void pdf(void)
{
	Character	*zaz = new Character("zaz");

	std::cout << *zaz;

	Enemy		*b = new RadScorpion();

	AWeapon		*pr = new PlasmaRifle();
	AWeapon		*pf = new PowerFist();


	zaz->equip(pr);
	std::cout << *zaz;

	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;

	zaz->equip(pr);
	std::cout << *zaz;

	zaz->attack(b);
	std::cout << *zaz;

	zaz->attack(b);
	std::cout << *zaz;
    
}

void custom(void)
{
    std::cout << std::endl << std::endl;
    
	Character	*c1 = new Character("zaz");
	Character	*c2 = new Character(*c1);
	Character	*c3 = new Character();
    c3 = c1;
    c2 = c1;
    
	RadScorpion	*r1 = new RadScorpion();
	Enemy       *r2 = new RadScorpion(*r1);
    r2 = r1;

	SuperMutant *s1 = new SuperMutant();
	Enemy       *s2 = new SuperMutant(*s1);
    s2 = s1;

	PlasmaRifle	*pr1 = new PlasmaRifle();
	AWeapon		*pr2 = new PlasmaRifle(*pr1);
    pr2 = pr1;

	PowerFist	*pf1 = new PowerFist();
	AWeapon		*pf2 = new PowerFist(*pf1);
    pf2 = pf1;

    c1->equip(pr1);
    c1->equip(pr2);
    c1->attack(s1);
    c1->attack(r1);
    std::cout << *c1;
    c1->recoverAP();
    std::cout << *c1;

    std::cout << s1->getType() << "  " << s1->getHP() << std::endl;
    s1->takeDamage(12);
    std::cout << s1->getType() << "  " << s1->getHP() << std::endl;

    std::cout << r1->getType() << "  " << r1->getHP() << std::endl;
    r1->takeDamage(12);
    std::cout << r1->getType() << "  " << r1->getHP() << std::endl;

    pr1->attack();
    pf1->attack();
}

int		main(void)
{
    pdf();

    custom();
	return (0);
}
