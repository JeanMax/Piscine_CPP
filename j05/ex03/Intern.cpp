// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Intern.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/22 05:24:24 by mcanal            #+#    #+#             //
//   Updated: 2015/06/23 18:07:42 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Intern.hpp"

/*
** constructor
*/
Intern::Intern(void)
{

}

Intern::Intern(Intern const &copy)
{
	*this = copy;
}

/*
** destructor
*/
Intern::~Intern(void)
{

}

/*
** operator overload
*/
Intern					&Intern::operator=(Intern const &copy)
{
	static_cast<void>(copy); //...

	return *this;
}

/*
** public
*/
Form					*Intern::makeForm(std::string const &name, std::string const &target)
{
	Form *form;

	if (name == "robotomy request")
		form = new RobotomyRequestForm(target);
	else if (name == "presidential pardon")
		form = new PresidentialPardonForm(target);
	else if (name == "shrubbery creation")
		form = new ShrubberyCreationForm(target);
	else
		form = NULL;

	if (form)
		std::cout << "Intern creates " << form->getName() << "." << std::endl;
	else
		std::cout << "Intern creatation failed." << std::endl;

	return form;
}
