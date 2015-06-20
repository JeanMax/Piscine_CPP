// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 23:49:21 by mcanal            #+#    #+#             //
//   Updated: 2015/06/20 17:10:05 by mcanal           ###   ########.fr       //
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
		Peon(std::string name = "bob");
		Peon(Peon const &copy);
		~Peon(void);

		void			getPolymorphed(void) const;

	protected:

};

#endif //PEON_HPP
