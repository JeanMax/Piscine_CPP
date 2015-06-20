// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 23:48:12 by mcanal            #+#    #+#             //
//   Updated: 2015/06/20 22:33:05 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Victim.hpp"
#include "Peon.hpp"
#include "Sorcerer.hpp"

/* SMURFFFFFFFFFFFFFFFFFFFFF */
class Smurf : public Victim
{
	public:
		Smurf(std::string name = "bob");
		Smurf(Smurf const &copy);
		~Smurf(void);

		void			getPolymorphed(void) const;

	protected:

};


/*
** constructor
*/
Smurf::Smurf(std::string name) : Victim(name)
{
	std::cout << "Smurf on" << std::endl;
}

Smurf::Smurf(Smurf const &copy) : Victim(copy)
{
	std::cout << "Smurf on" << std::endl;
}

/*
** destructor
*/
Smurf::~Smurf(void)
{
	std::cout << "Smurf off" << std::endl;
}

/*
** public
*/
void					Smurf::getPolymorphed(void) const
{
	std::cout << this->_name
				<< " has been turned into something else !" << std::endl;
}

/* SMURFFFFFFFFFFFFFFFFFFFFF DONE */


static void		pdf(void)
{
	Sorcerer	robert("Robert", "the Magnificent");
	Victim		jim("Jimmy");
	Peon		joe("Joe");

	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
}

static void	 custom(void)
{
    std::cout << std::endl << std::endl;

    /*
	try
	{
		Sorcerer	crash; //throw error!
	}
	catch (std::invalid_argument &e)
	{
        std::cout << e.what() << std::endl;
	}
    */
	Sorcerer	robert("Robert", "the Magnificent");
	Sorcerer	john("john", "the Magnificent");
    Sorcerer    bob(robert);
	Victim		jim("Jimmy");
	Peon		joe("Joe");

    bob = john;
    std::cout << bob.getName() << std::endl;
    std::cout << bob.getTitle() << std::endl;
    std::cout << bob << std::endl;
    bob.polymorph(jim);


    Victim     va;
    Victim     vb("vb");

    va = vb;
    vb.getPolymorphed();
    std::cout << va.getName() << std::endl;
    std::cout << va << std::endl;

    Peon pa;
    Peon pb("pb");

    pa = pb;
    pb.getPolymorphed();
    std::cout << pa.getName() << std::endl;
    std::cout << pa << std::endl;

    Smurf sa;
    Smurf sb("smurf");
    
    sa = sb;
    sb.getPolymorphed();
    std::cout << sa.getName() << std::endl;
    std::cout << sa << std::endl;
}

int		main(void)
{
	pdf();

	custom();
    
	return (0);
}
