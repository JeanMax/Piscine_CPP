// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:15:37 by mcanal            #+#    #+#             //
//   Updated: 2015/06/20 22:27:04 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

void	 pdf()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
}

void	 custom()
{
    Squad* vlc = new Squad;
    ISquad* squad1 = new Squad;
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISpaceMarine* jon = jim->clone();
    ISpaceMarine* zob;
    zob = bob;

    vlc->push(jim);
    vlc->push(jon); //clone pushed
    vlc->push(zob); //but copy not pushed !
    vlc->push(NULL); //NULL neither !
    
    ISquad* squad2 = new Squad(*vlc);
    squad1 = vlc;
    squad2 = vlc;
        
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        std::cout << "---------" << i+1 << "/" << vlc->getCount() << "---------" << std::endl;
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;
}

int		main(void)
{
    pdf();
    custom();
    
	return (0);
}
