// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AMateria.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:20:08 by mcanal            #+#    #+#             //
//   Updated: 2015/06/18 00:20:55 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef AMATERIA_HPP

/*
** defines
*/
# define AMATERIA_HPP

/*
** includes
*/
//# include <iostream>

/*
** class
*/
class AMateria
{
	private:
		[...]
		unsigned int xp_;
	public:
		AMateria(std::string const & type);
		[...]
		[...] ~AMateria();

		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif //AMATERIA_HPP
