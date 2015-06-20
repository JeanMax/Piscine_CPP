// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Smurf.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 23:49:21 by mcanal            #+#    #+#             //
//   Updated: 2015/06/20 22:31:40 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SMURF_HPP

/*
** defines
*/
# define SMURF_HPP

/*
** includes
*/
# include "Victim.hpp"

/*
** class
*/
class Smurf : public Victim
{
	public:
		Smurf(std::string name = "bob");
		Smurf(Smurf const &copy);
		~Smurf(void);

		void			getPolymorphed(void) const;

	protected:

};

#endif //SMURF_HPP
