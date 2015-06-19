// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 23:49:21 by mcanal            #+#    #+#             //
//   Updated: 2015/06/19 13:44:59 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PEON_HPP

/*
** defines
*/
# define PEON_HPP

/*
** includes
*/
# include "Victim.hpp"

/*
** class
*/
class Peon : public Victim
{
	public:
		Peon(void); //TODO: wtf?
		Peon(std::string name);
		Peon(Peon const &copy);
		~Peon(void);

		void			getPolymorphed(void) const;

	protected:

};

#endif //PEON_HPP
