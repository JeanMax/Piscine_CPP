// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   IAsteroid.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 00:35:54 by mcanal            #+#    #+#             //
//   Updated: 2015/06/18 00:37:04 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef IASTEROID_HPP

/*
** defines
*/
# define IASTEROID_HPP

/*
** includes
*/
//# include <iostream>

/*
** class
*/
class IAsteroid
{
	public:
		virtual ~IAsteroid() {}
		virtual std::string beMined([...] *) const = 0;
		[...]
		virtual std::string getName() const = 0;

};

#endif //IASTEROID_HPP
