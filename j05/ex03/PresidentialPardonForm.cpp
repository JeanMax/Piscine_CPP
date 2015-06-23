// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PresidentialPardonForm.cpp                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/22 05:22:59 by mcanal            #+#    #+#             //
//   Updated: 2015/06/23 17:34:10 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PresidentialPardonForm.hpp"

/*
** constructor
*/
PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
	Form("PresidentialPardonForm", 25, 5),
	_target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : 
	Form("PresidentialPardonForm", 25, 5)
{
	*this = copy;
}

/*
** destructor
*/
PresidentialPardonForm::~PresidentialPardonForm(void)
{

}

/*
** operator overload
*/
PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &copy)
{
	Form::operator=(copy);
	this->_target = copy._target;

	return *this;
}

/*
** public
*/
void					PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	this->checkExec(executor.getGrade());

	std::cout << this->_target 
			  << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
