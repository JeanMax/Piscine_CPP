// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/22 05:14:30 by mcanal            #+#    #+#             //
//   Updated: 2015/06/23 22:05:12 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Form.hpp"

/*
** constructor
*/
Form::Form(std::string const &name, const int signGrade, const int execGrade) :
	_name(name),
	_signGrade(signGrade),
	_execGrade(execGrade),
	_isSigned(false)
{
	if (DEBUG) std::cout << "Constructed " << *this;

	if (execGrade < 1 || signGrade < 1)
		throw Form::GradeTooHighException();
	else if (execGrade > 150 || signGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &copy) : _name(copy._name),
							   _signGrade(copy._signGrade),
							   _execGrade(copy._execGrade)
{
	if (DEBUG) std::cout << "Copy-constructed " << *this;
	*this = copy;
}

Form::GradeTooHighException::GradeTooHighException(void) throw()
{
	if (DEBUG) std::cout << "Form::GradeTooHighException constructed." << std::endl;
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &copy) throw()
{
	if (DEBUG) std::cout << "Form::GradeTooHighException copy-constructed." << std::endl;
	*this = copy;
}

Form::GradeTooLowException::GradeTooLowException(void) throw()
{
	if (DEBUG) std::cout << "Form::GradeTooLowException constructed." << std::endl;
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &copy) throw()
{
	if (DEBUG) std::cout << "Form::GradeTooLowException copy-constructed." << std::endl;
	*this = copy;
}

/*
** destructor
*/
Form::~Form(void)
{
	if (DEBUG) std::cout<< "Destructed " << *this;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw()
{
	if (DEBUG) std::cout << "Form::GradeTooHighException destructed." << std::endl;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{
	if (DEBUG) std::cout << "Form::GradeTooLowException destructed." << std::endl;
}

/*
** operator overload
*/
Form				&Form::operator=(Form const &copy)
{
	this->_isSigned = copy._isSigned;
	
	if (copy._execGrade < 1 || copy._signGrade < 1)
		throw Form::GradeTooHighException();
	else if (copy._execGrade > 150 || copy._signGrade > 150)
		throw Form::GradeTooLowException();

	return *this;
}

Form::GradeTooHighException	&Form::GradeTooHighException::operator=(GradeTooHighException const &copy) throw()
{
	static_cast<void>(copy); //...

	return *this;
}

Form::GradeTooLowException	&Form::GradeTooLowException::operator=(GradeTooLowException const &copy) throw()
{
	static_cast<void>(copy); //...

	return *this;
}

std::ostream			&operator<<(std::ostream &o, Form const &copy)
{
	o << copy.getName() << " form, grade to sign : " 
	  << copy.getSignGrade() << ", grade to execute : " 
	  << copy.getExecGrade() << ", " << (copy.getIsSigned() ? "" : "not " )
	  << "signed." << std::endl;

	return o;
}

/*
** public
*/
const char				*Form::GradeTooHighException::what(void) const throw()
{
	return "Form::GradeTooHighException";
}

const char				*Form::GradeTooLowException::what(void) const throw()
{
	return "Form::GradeTooLowException";
}

void					Form::beSigned(Bureaucrat const &copy)
{
	if (this->_signGrade > copy.getGrade())
		throw Form::GradeTooLowException();

    if (this->_isSigned)
        throw std::invalid_argument("FormAlreadySigned");

	this->_isSigned = true;
}

/*
** getter/setter
*/
std::string const	&Form::getName(void) const		{ return this->_name; }
int					Form::getSignGrade(void) const	{ return this->_signGrade; }
int					Form::getExecGrade(void) const	{ return this->_execGrade; }
bool				Form::getIsSigned(void) const	{ return this->_isSigned; }
