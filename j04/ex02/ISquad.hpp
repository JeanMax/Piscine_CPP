// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ISquad.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:13:18 by mcanal            #+#    #+#             //
//   Updated: 2015/06/18 00:14:10 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ISQUAD_HPP

/*
** defines
*/
# define ISQUAD_HPP

/*
** includes
*/
//# include <iostream>

/*
** class
*/
class ISquad
{
	public:
		virtual		~ISquad() {}
		virtual		int		 getCount() const = 0;
		virtual		ISpaceMarine* getUnit(int) = 0;
		virtual		int		 push(ISpaceMarine*) = 0;

};

#endif //ISQUAD_HPP
