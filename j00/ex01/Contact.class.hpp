// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Contact.class.hpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/15 11:32:41 by mcanal            #+#    #+#             //
//   Updated: 2015/06/15 11:58:21 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CONTACT_CLASS_HPP

/*
** defines
*/
# define CONTACT_CLASS_HPP

/*
** includes
*/
# include <iostream>
# include <string> //TODO : check pdf

/*
** class
*/
class Contact
{
	public:
		Contact(void);
		~Contact(void);
		bool		exists(void)						const;
		void		print(bool all = true)				const;
		void		edit(void);

	private:
		std::string	prompt(std::string out)				const;
		std::string checkLength(std::string s)          const;

		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_login;
		std::string	_adress;
		std::string	_email;
		std::string	_phone;
		std::string	_birthday;
		std::string	_favoriteMeal;
		std::string	_underwearColor;
		std::string	_darkestSecret;
};

#endif //CONTACT_CLASS_HPP
