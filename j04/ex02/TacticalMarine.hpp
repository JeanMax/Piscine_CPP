// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   TacticalMarine.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:17:08 by mcanal            #+#    #+#             //
//   Updated: 2015/06/20 13:39:09 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef TACTICALMARINE_HPP

/*
** defines
*/
# define TACTICALMARINE_HPP

/*
** includes
*/
# include "ISpaceMarine.hpp"

/*
** class
*/
class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine(void);
		TacticalMarine(TacticalMarine const &copy);
		~TacticalMarine(void);

		TacticalMarine		&operator=(TacticalMarine const &copy);
		TacticalMarine		*clone(void) const;
		void				battleCry(void) const;
		void				rangedAttack(void) const;
		void				meleeAttack(void) const;

	private:

};

#endif //TACTICALMARINE_HPP
