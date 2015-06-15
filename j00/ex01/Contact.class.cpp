// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Contact.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/15 11:32:34 by mcanal            #+#    #+#             //
//   Updated: 2015/06/15 12:46:53 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Contact.class.hpp"

//MAGIC
Contact::Contact(void) : _login("")
{

}

Contact::~Contact(void)
{

}

//PRIVATE
std::string		Contact::prompt(std::string out) const
{
	std::string	line;

	do
	{
		std::cout << out << std::endl;
		getline(std::cin, line);
	}
	while (line.size() < 1);

	return line;
}

std::string     Contact::checkLength(std::string s) const
{
    while (s.size() < 10)
        s = " " + s;

    if (s.size() > 10)       
        s[9] = '.';

    s.resize(10);
    
     return (s);
}

//PUBLIC
bool			Contact::exists(void)	const
{
	return this->_login != "" ? true : false;
}

void			Contact::edit(void)
{
	this->_firstName = this->prompt("first name?");
	this->_lastName = this->prompt("last name?");
	this->_nickName = this->prompt("nick name?");
	this->_login = this->prompt("login?");
	this->_adress = this->prompt("postal adress?");
	this->_email = this->prompt("email adress?");
	this->_phone = this->prompt("phone number?");
	this->_birthday = this->prompt("birthday date?");
	this->_favoriteMeal = this->prompt("favorite meal?");
	this->_underwearColor = this->prompt("underwear color?");
	this->_darkestSecret = this->prompt("darkest secret?");
}

void			Contact::print(bool all)	const
{
    
	if (!all)
    {
        std::cout << this->checkLength(this->_firstName) << '|'         \
                  << this->checkLength(this->_lastName) << '|'          \
                  << this->checkLength(this->_nickName) << std::endl;
    }
    else
    {
        std::cout <<                    \
            "first name:      " << this->_firstName << std::endl << \
            "last name:       " << this->_lastName << std::endl <<   \
            "nick name:       " << this->_nickName << std::endl <<     \
            "login:           " << this->_login << std::endl <<        \
            "postal adress:   " << this->_adress << std::endl <<       \
            "email adress:    " << this->_email << std::endl <<        \
            "phone number:    " << this->_phone << std::endl <<        \
            "birthday date:   " << this->_birthday << std::endl <<     \
            "favorite meal:   " << this->_favoriteMeal << std::endl << \
            "underwear color: " << this->_underwearColor << std::endl <<   \
            "darkest secret:  " << this->_darkestSecret << std::endl;
    }
}
