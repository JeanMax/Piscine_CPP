// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AssaultTerminator.hpp                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:17:42 by mcanal            #+#    #+#             //
//   Updated: 2015/06/20 13:39:05 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ASSAULTTERMINATOR_HPP

/*
** defines
*/
# define ASSAULTTERMINATOR_HPP

/*
** includes
*/
# include "ISpaceMarine.hpp"

/*
** class
*/
class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const &copy);
		~AssaultTerminator(void);

		AssaultTerminator		&operator=(AssaultTerminator const &copy);
		AssaultTerminator		*clone(void) const;
		void					battleCry(void) const;
		void					rangedAttack(void) const;
		void					meleeAttack(void) const;

	private:

};

#endif //ASSAULTTERMINATOR_HPP
