// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 13:30:49 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 14:38:51 by mcanal           ###   ########.fr       //
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
# include <sstream>

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
