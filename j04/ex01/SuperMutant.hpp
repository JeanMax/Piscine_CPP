// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperMutant.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:05:52 by mcanal            #+#    #+#             //
//   Updated: 2015/06/19 15:54:37 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SUPERMUTANT_HPP

/*
** defines
*/
# define SUPERMUTANT_HPP

/*
** includes
*/
# include "Enemy.hpp"

/*
** class
*/
class SuperMutant : public Enemy
{
	public:
		SuperMutant(void);
		SuperMutant(SuperMutant const &copy);
		virtual ~SuperMutant(void);

		void			takeDamage(int damage);
		SuperMutant		&operator=(SuperMutant const &copy);

	private:

};

#endif //SUPERMUTANT_HPP
