// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/22 05:21:26 by mcanal            #+#    #+#             //
//   Updated: 2015/06/23 16:50:06 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SHRUBBERYCREATIONFORM_HPP

/*
** defines
*/
# define SHRUBBERYCREATIONFORM_HPP

/*
** includes
*/
# include "Form.hpp"

/*
** class
*/
class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string const &target = "TargetLess");
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);
		virtual ~ShrubberyCreationForm(void);
		ShrubberyCreationForm		&operator=(ShrubberyCreationForm const &copy);

		virtual void				execute(Bureaucrat const &executor) const;

	private:
		std::string					_target;
};

#endif //PRESIDENTIALPARDONFORM_HPP
