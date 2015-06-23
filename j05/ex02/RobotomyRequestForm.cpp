// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RobotomyRequestForm.cpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/22 05:22:48 by mcanal            #+#    #+#             //
//   Updated: 2015/06/23 17:33:20 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "RobotomyRequestForm.hpp"

/*
** constructor
*/
RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
	Form("RobotomyRequestForm", 72, 55),
	_target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : 
	Form("RobotomyRequestForm", 72, 55)
{
	*this = copy;
}

/*
** destructor
*/
RobotomyRequestForm::~RobotomyRequestForm(void)
{

}

/*
** operator overload
*/
RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &copy)
{
	Form::operator=(copy);
	this->_target = copy._target;

	return *this;
}

/*
** public
*/
void					RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	this->checkExec(executor.getGrade());

	std::cout << " * drilling noise * Robotomy on " << this->_target 
			  << (rand() % 2 ? ": Success." : ": Fail.") << std::endl;
}
