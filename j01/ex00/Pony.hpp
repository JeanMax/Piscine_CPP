// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 11:30:39 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 11:34:11 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PONY_HPP

/*
** defines
*/
# define PONY_HPP

/*
** includes
*/
# include <iostream>

/*
** class
*/
class Pony
{
	public:
		Pony(std::string const &name);
		~Pony(void);
		void	doStuff(void) const;

	private:
		std::string		_name;
};

#endif //PONY_HPP
