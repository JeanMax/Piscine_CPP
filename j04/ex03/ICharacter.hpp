// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ICharacter.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:21:19 by mcanal            #+#    #+#             //
//   Updated: 2015/06/18 00:22:03 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ICHARACTER_HPP

/*
** defines
*/
# define ICHARACTER_HPP

/*
** includes
*/
//# include <iostream>

/*
** class
*/
class ICharacter
{
	public:
		virtual		~ICharacter() {}
		virtual		std::string const & getName() const = 0;
		virtual		void	 equip(AMateria* m) = 0;
		virtual		void	 unequip(int idx) = 0;
		virtual		void	 use(int idx, ICharacter& target) = 0;
};

#endif //ICHARACTER_HPP
