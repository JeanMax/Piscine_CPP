// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ISpaceMarine.hpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:14:37 by mcanal            #+#    #+#             //
//   Updated: 2015/06/18 00:15:17 by mcanal           ###   ########.fr       //
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
//# include <iostream>

/*
** class
*/
class ISpaceMarine
{
	public:
		virtual		~ISpaceMarine() {}
		virtual	 		ISpaceMarine* clone() const = 0;
		virtual	 		void	 battleCry() const = 0;
		virtual	 		void	 rangedAttack() const = 0;
		virtual	 		void	 meleeAttack() const = 0;
};

#endif //ISPACEMARINE_HPP
