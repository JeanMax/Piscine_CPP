// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/22 05:21:26 by mcanal            #+#    #+#             //
//   Updated: 2015/06/23 22:31:59 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ShrubberyCreationForm.hpp"

/*
** constructor
*/
ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
	Form("ShrubberyCreationForm", 25, 5),
	_target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : 
	Form("ShrubberyCreationForm", 25, 5)
{
	*this = copy;
}

/*
** destructor
*/
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}

/*
** operator overload
*/
ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copy)
{
	Form::operator=(copy);
	this->_target = copy._target;

	return *this;
}

/*
** public
*/
void					ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	this->checkExec(executor.getGrade());

	std::ofstream   wStream(this->_target.c_str());

    if (!wStream)
    {
		std::cerr << "Error: could not open file." << std::endl;
        return ;
    }
	
	wStream << "This is a tiny ascii tree with two branches : Y" << std::endl
            << "Proof I'm not so lazzy, here another one : T" << std::endl;
}
