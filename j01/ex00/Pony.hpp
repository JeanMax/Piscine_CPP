// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/07 21:18:55 by mcanal            #+#    #+#             //
//   Updated: 2015/06/07 22:37:42 by mcanal           ###   ########.fr       //
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
		void	hello(void) const;

	private:
		std::string		_name;
};

#endif //PONY_HPP
