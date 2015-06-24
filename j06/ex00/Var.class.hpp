// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Var.class.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/24 02:23:37 by mcanal            #+#    #+#             //
//   Updated: 2015/06/24 04:48:04 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef VAR_HPP

/*
** defines
*/
# define VAR_HPP
# define ERROR	0
# define CHAR	1
# define INT	2
# define FLOAT	3
# define DOUBLE	4

/*
** includes
*/
# include <iostream>
# include <climits>
# include <cstdlib>
# include <sstream>
# include <stdexcept>

/*
** class
*/
class Var
{
	protected:
		char		guessType(std::string const &s) const;
		std::string	_s;

	public:
		Var(std::string const &s = "42");
		Var(Var const &copy);
		~Var(void);
		Var		&operator=(Var const &copy);

		char		toChar(void) const;
		int			toInt(void) const;
		float		toFloat(void) const;
		double		toDouble(void) const;

		char		type;
};

#endif //VAR_HPP
