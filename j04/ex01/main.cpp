// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 23:57:06 by mcanal            #+#    #+#             //
//   Updated: 2015/06/19 14:49:01 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Character.hpp"

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int		main(void)
{
	Character	*zaz = new Character("zaz");
	Enemy		*b = new RadScorpion();
	AWeapon		*pr = new PlasmaRifle();
	AWeapon		*pf = new PowerFist();

	std::cout << *zaz;

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

	return (0);
}
