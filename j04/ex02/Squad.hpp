// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Squad.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:16:51 by mcanal            #+#    #+#             //
//   Updated: 2015/06/20 13:38:56 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SQUAD_HPP

/*
** defines
*/
# define SQUAD_HPP
# define SQUAD_SIZE 42

/*
** includes
*/
# include "ISquad.hpp"

/*
** class
*/
class Squad : public ISquad
{
	public:
		Squad(void);
		Squad(Squad const &copy);
		virtual ~Squad(void);

		Squad				&operator=(Squad const &copy);
		int					getCount(void) const;
		ISpaceMarine		*getUnit(int n);
		int					push(ISpaceMarine *unit);

	protected:
		ISpaceMarine		**_squad;
		int					_count;

};

#endif //SQUAD_HPP
