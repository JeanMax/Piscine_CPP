// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 23:49:43 by mcanal            #+#    #+#             //
//   Updated: 2015/06/20 17:07:28 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef VICTIM_HPP

/*
** defines
*/
# define VICTIM_HPP

/*
** includes
*/
# include <iostream>

/*
** class
*/
class Victim
{
	public:
		Victim(std::string name = "bob");
		Victim(Victim const &copy);
		~Victim(void);

		std::string		getName(void)	const;
		virtual void	getPolymorphed(void) const; //redefined in Peon.[hc]pp

		Victim			&operator=(Victim const &copy);

	protected:
		std::string	 _name;
};

/*
** prototypes
*/
std::ostream			&operator<<(std::ostream &o, Victim const &rhs);

#endif //VICTIM_HPP
