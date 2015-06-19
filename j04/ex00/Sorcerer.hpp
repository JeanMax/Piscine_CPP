// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 23:50:16 by mcanal            #+#    #+#             //
//   Updated: 2015/06/19 14:17:47 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SORCERER_HPP

/*
** defines
*/
# define SORCERER_HPP

/*
** includes
*/
# include "Victim.hpp"

/*
** class
*/
class Sorcerer
{
	public:
		Sorcerer(void); //TODO: wtf?
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const &copy);
		~Sorcerer(void);

		std::string		getName(void)	const;
		std::string		getTitle(void)	const;
		void			polymorph(Victim const &v) const;

		Sorcerer		&operator=(Sorcerer const &copy);

	protected:
		std::string		_name;
		std::string		_title;
};

/*
** prototypes
*/
std::ostream			&operator<<(std::ostream &o, Sorcerer const &rhs);

#endif //SORCERER_HPP
