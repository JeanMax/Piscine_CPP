// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Var.class.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/24 02:23:44 by mcanal            #+#    #+#             //
//   Updated: 2015/06/24 05:06:22 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Var.class.hpp"

/*
** constructor
*/
Var::Var(std::string const &s) : _s(s), type(guessType(s))
{

}

Var::Var(Var const &copy)
{
	*this = copy;
}

/*
** destructor
*/
Var::~Var(void)
{

}

/*
** operator overload
*/
Var						&Var::operator=(Var const &copy)
{
	this->_s = copy._s;
	this->type = copy.type;

	return *this;
}

/*
** protected
*/
char					Var::guessType(std::string const &s) const
{
	char const	 *p = s.c_str();

	if (s.size() == 1)
		return isdigit(*p) ? INT : CHAR;

	if (s == "-inff" || s == "+inff" || s == "nanf")
		return FLOAT;
	else if (s == "-inf" || s == "+inf" || s == "nan")
		return DOUBLE;

	unsigned char nbF = 0;
	unsigned char nbPoint = 0;
	unsigned char nbMinus = 0;

	while (*p)
	{
		if (*p == '.')
			nbPoint++;
		else if (*p == 'f')
			nbF++;
		else if (*p == '-')
			nbMinus++;
		else if (!isdigit(*p))
			return ERROR;
		p++;
	}
	if (nbF > 1 || nbPoint > 1 || nbMinus > 1 || (nbF && !nbPoint))
		return ERROR;

	if (nbPoint && nbF)
		return FLOAT;
	else if (nbPoint)
		return DOUBLE;

	return INT;
}

/*
** public
*/
char					Var::toChar(void) const
{
	if (this->_s == "-inff" || this->_s == "+inff" || this->_s == "nanf" ||
		this->_s == "-inf" || this->_s == "+inf" || this->_s == "nan")
		throw std::invalid_argument(("\b" + this->_s).c_str());

	char c = static_cast<char>(atoi(this->_s.c_str()));

	if (atol(this->_s.c_str()) > 127 || atol(this->_s.c_str()) < -128)
		throw std::invalid_argument("\bimpossible");
	else if (c > 126 || c < 32)
		throw std::invalid_argument("\bNon displayable");

	return c;
}

int						Var::toInt(void) const
{
	if (this->_s == "-inff" || this->_s == "+inff" || this->_s == "nanf" ||
		this->_s == "-inf" || this->_s == "+inf" || this->_s == "nan")
		throw std::invalid_argument(this->_s.c_str());
		
	if (atol(this->_s.c_str()) > INT_MAX || atol(this->_s.c_str()) < INT_MIN)
			throw std::invalid_argument("impossible");

	return static_cast<int>(atoi(this->_s.c_str()));
}

float					Var::toFloat(void) const
{
	return static_cast<float>(strtof(this->_s.c_str(), 0));// TODO: cheated? :O

	if (this->type == CHAR)
        return static_cast<float>(this->_s[0]);

	float	f = 0;
	std::stringstream ss;

	ss.str(this->_s);
	ss >> f;

	return f;
}

double					Var::toDouble(void) const
{
	if (this->type == CHAR)
		return static_cast<double>(this->_s[0]);

	return static_cast<double>(atof(this->_s.c_str()));
}
