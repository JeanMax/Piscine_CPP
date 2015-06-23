// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PresidentialPardonForm.hpp                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/22 05:22:59 by mcanal            #+#    #+#             //
//   Updated: 2015/06/23 16:49:38 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PRESIDENTIALPARDONFORM_HPP

/*
** defines
*/
# define PRESIDENTIALPARDONFORM_HPP

/*
** includes
*/
# include "Form.hpp"

/*
** class
*/
class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string const &target = "TargetLess");
		PresidentialPardonForm(PresidentialPardonForm const &copy);
		virtual ~PresidentialPardonForm(void);
		PresidentialPardonForm		&operator=(PresidentialPardonForm const &copy);

		virtual void				execute(Bureaucrat const &executor) const;

	private:
		std::string					_target;
};

#endif //PRESIDENTIALPARDONFORM_HPP
