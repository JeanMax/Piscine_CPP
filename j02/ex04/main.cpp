// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 21:42:07 by mcanal            #+#    #+#             //
//   Updated: 2015/06/19 22:29:02 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

/*
** Thanks mnguyen!
*/

#include "Fixed.class.hpp"
#include <string>
#include <sstream>
#include <stdexcept>

static Fixed			stofix(std::string s)
{
//	std::cout << __func__ << " (" << __FILE__ << ") - line: " << __LINE__ << std::endl;	//debug
    try
    {
        Fixed ret(std::stof(s.c_str()));
        return ret;
    }
    catch (const std::invalid_argument& ia)
    {
        std::cerr << "Error: syntax." << std::endl;
        exit(0);
    }
    return 0;
}

static std::string		fixtos(Fixed f)
{
//	std::cout << __func__ << " (" << __FILE__ << ") - line: " << __LINE__ << std::endl;	//debug
	std::ostringstream ss;

	ss << f.toFloat();
	return ss.str();
}

static int					 isOp(int c)
{
//	std::cout << __func__ << " (" << __FILE__ << ") - line: " << __LINE__ << std::endl;	//debug
	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '.')
		return 1;
	if (c == '(' || c == ')')
		return 2;
	return 0;
}

static bool			 checkSyntax(const char *ptr)
{
//	std::cout << __func__ << " (" << __FILE__ << ") - line: " << __LINE__ << std::endl;	//debug
	int	i = 0;

	if (isOp(*ptr) && *ptr != '(')
		return false;

	while (*ptr)
	{
		if ( (!isdigit(*ptr) && !isOp(*ptr))
			 || (isOp(*ptr) == 1 && isOp(*(ptr + 1) == 1)) )
			return false;

		if (*ptr == '(')
			i++;
		else if (*ptr == ')')
			i--;

		ptr++;
	}

	if ((isOp(*(ptr - 1)) && *(ptr - 1) != ')') || i )
		return false;

	return true;
}

static std::string		removeSpaces(std::string s)
{
//	std::cout << __func__ << " (" << __FILE__ << ") - line: " << __LINE__ << std::endl;	//debug
	size_t	 i = 0;
	std::string search = " ";
	std::string replace = "";
	while ((i = s.find(search, i)) != std::string::npos)
	{
		s.replace(i, search.length(), replace);
		i += replace.length();
	}

	search = "\t";
	while ((i = s.find(search, i)) != std::string::npos)
	{
		s.replace(i, search.length(), replace);
		i += replace.length();
	}

	return s;
}

static std::string solve_mult(std::string s)
{
//	std::cout << __func__ << " (" << __FILE__ << ") - line: " << __LINE__ << std::endl;	//debug
	size_t i;
	size_t j;
	size_t k;

	while ((j = s.find("*")) != std::string::npos)
	{
		i = j - 1;
		while (s[i] != '*' && s[i] != '/' && s[i] != '+' && s[i] != '-' && i != 0)
			i--;
		if (i != 0)
			i++;
		k = j + 1;
		while (s[k] != '*' && s[k] != '/' && s[k] != '+' && s[k] != '-' && k < s.length() - 1)
			k++;
		if (k != s.length() - 1)
			k--;
		s.replace(i, k - i + 1, fixtos(stofix(s.substr(i, j - i)) * stofix(s.substr(j + 1, k - j))));
	}
	return s;

}

static std::string	 solve_div(std::string s)
{
//	std::cout << __func__ << " (" << __FILE__ << ") - line: " << __LINE__ << std::endl;	//debug
	size_t i;
	size_t j;
	size_t k;

	while ((j = s.find("/")) != std::string::npos)
	{
		i = j - 1;
		while (s[i] != '/' && s[i] != '+' && s[i] != '-' && i != 0)
			i--;
		if (i != 0)
			i++;
		k = j + 1;
		while (s[k] != '/' && s[k] != '+' && s[k] != '-' && k < s.length() - 1)
			k++;
		if (k != s.length() - 1)
			k--;
		s.replace(i, k - i + 1, fixtos(stofix(s.substr(i, j - i)) / stofix(s.substr(j + 1, k - j))));
	}
	return s;

}

static std::string	 solve_add(std::string s)
{
//	std::cout << __func__ << " (" << __FILE__ << ") - line: " << __LINE__ << std::endl;	//debug
	size_t i;
	size_t j;
	size_t k;

	while ((j = s.find("+")) != std::string::npos)
	{
		i = j - 1;
		while (s[i] != '+' && s[i] != '-' && i != 0)
			i--;
		if (i != 0)
			i++;
		k = j + 1;
		while (s[k] != '+' && s[k] != '-' && k < s.length() - 1)
			k++;
		if (k != s.length() - 1)
			k--;
		s.replace(i, k - i + 1, fixtos(stofix(s.substr(i, j - i)) + stofix(s.substr(j + 1, k - j))));
	}
	return s;

}

static std::string	 solve_sous(std::string s)
{
//	std::cout << __func__ << " (" << __FILE__ << ") - line: " << __LINE__ << std::endl;	//debug
	size_t i;
	size_t j;
	size_t k;

	while ((j = s.find("-")) != std::string::npos)
	{
		i = j - 1;
		while (s[i] != '-' && i != 0)
			i--;
		if (i != 0)
			i++;
		k = j + 1;
		while (s[k] != '-' && k < s.length() - 1)
			k++;
		if (k != s.length() - 1)
			k--;
		s.replace(i, k - i + 1, fixtos(stofix(s.substr(i, j - i)) - stofix(s.substr(j + 1, k - j))));
	}
	return s;

}

static std::string solve_parenthesis(std::string s)
{
//	std::cout << __func__ << " (" << __FILE__ << ") - line: " << __LINE__ << std::endl;	//debug
	s = solve_mult(s);
	s = solve_div(s);
	s = solve_add(s);
	s = solve_sous(s);
	return s;
}

static std::string find_parenthesis(std::string s)
{
//	std::cout << __func__ << " (" << __FILE__ << ") - line: " << __LINE__ << std::endl;	//debug
	size_t i;
	size_t j;

	while ((j = s.find(")")) != std::string::npos)
	{
		i = j;
		while (s[--i] != '(');
		if (i == 0 && s[i] != '(')
			return NULL;
		s.replace(i, j - i + 1, solve_parenthesis(s.substr(i + 1, j - i - 1)));
	}
	s = solve_parenthesis(s);
	std::cout << s << std::endl;
	return s;
}

int		main(int ac, char**av)
{
	if (ac == 2)
	{
		std::string s = removeSpaces(av[1]);
		if (checkSyntax(s.c_str()))
			find_parenthesis(s);
		else
			std::cout << "syntax error" << std::endl;
	}
	else
		std::cout << "argument error" << std::endl;
	return 0;
}
