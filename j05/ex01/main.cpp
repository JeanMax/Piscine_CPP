// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/22 05:27:25 by mcanal            #+#    #+#             //
//   Updated: 2015/06/23 22:10:00 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	std::cout << "PART 00" << std::endl;
	// -------------------   PART 00   ------------------------------ //
	Bureaucrat b1("b1", 5);
	Bureaucrat b2("b2", 147);

	try
	{
		Bureaucrat *b3 = new Bureaucrat("b3", 1000);
		delete b3;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	for (int i = 0; i < 8; i++)
	{
		try
		{
			b1 += 1;
			b2 -= 1;
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		std::cout << b1;
		std::cout << b2;
	}



	std::cout << std::endl << "PART 01" << std::endl;
	// -------------------   PART 01   ------------------------------ //
    Form f1("f1", 5, 5);
    Form f2("f2", 100, 100);

	try
	{
		Form *f3 = new Form("f3", 1000, 1000);
		delete f3;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

    std::cout << f1;
    std::cout << f2;    

    try
    {
        b1.signForm(f1);
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    std::cout << f1;
    
    try
    {
        b2.signForm(f1);
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    std::cout << f1;
    
    try
    {
        b1.signForm(f2);
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    std::cout << f2;

    try
    {
        b2.signForm(f2);
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    std::cout << f2;

    try
    {
        b2.signForm(f2);
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    std::cout << f2;

	return (0);
}
