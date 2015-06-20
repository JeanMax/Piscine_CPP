// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ISquad.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:13:18 by mcanal            #+#    #+#             //
//   Updated: 2015/06/20 12:53:13 by mcanal           ###   ########.fr       //
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
# include "ISpaceMarine.hpp"

/*
** class
*/
class ISquad
{
	public:
		virtual ~ISquad(void) {};

		virtual int				getCount(void) const = 0;
		virtual ISpaceMarine	*getUnit(int n) = 0;
		virtual int				push(ISpaceMarine *unit) = 0;

};

#endif //ISQUAD_HPP
