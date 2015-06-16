// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 13:30:55 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 14:38:56 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_HPP

/*
** defines
*/
# define HUMAN_HPP

/*
** includes
*/
# include "Brain.hpp"

/*
** class
*/
class Human
{
	public:
		Human(void);
		~Human(void);
		std::string		identify(void)	const;
		Brain const		&getBrain(void) const;	

	private:
		Brain const		_b;
};

#endif //HUMAN_HPP
