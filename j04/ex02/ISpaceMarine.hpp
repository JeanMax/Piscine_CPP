// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ISpaceMarine.hpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:14:37 by mcanal            #+#    #+#             //
//   Updated: 2015/06/20 12:52:43 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ISPACEMARINE_HPP

/*
** defines
*/
# define ISPACEMARINE_HPP

/*
** includes
*/
# include <iostream>

/*
** class
*/
class ISpaceMarine
{
	public:
		virtual	~ISpaceMarine(void) {};

		virtual ISpaceMarine	*clone(void) const = 0;
		virtual	void			battleCry(void) const = 0;
		virtual	void			rangedAttack(void) const = 0;
		virtual	void			meleeAttack(void) const = 0;
};

#endif //ISPACEMARINE_HPP
