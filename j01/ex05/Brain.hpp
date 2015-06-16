// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/09 03:27:27 by mcanal            #+#    #+#             //
//   Updated: 2015/06/09 03:58:37 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BRAIN_HPP

/*
** defines
*/
# define BRAIN_HPP

/*
** includes
*/
# include <iostream>

/*
** class
*/
class Brain
{
	public:
		Brain(void);
		~Brain(void);
		std::string		identify(void)	const;

	private:

};

#endif //BRAIN_HPP
