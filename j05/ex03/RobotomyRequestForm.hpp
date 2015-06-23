// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RobotomyRequestForm.hpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/22 05:22:48 by mcanal            #+#    #+#             //
//   Updated: 2015/06/23 16:49:55 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ROBOTOMYREQUESTFORM_HPP

/*
** defines
*/
# define ROBOTOMYREQUESTFORM_HPP

/*
** includes
*/
# include "Form.hpp"

/*
** class
*/
class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string const &target = "TargetLess");
		RobotomyRequestForm(RobotomyRequestForm const &copy);
		virtual ~RobotomyRequestForm(void);
		RobotomyRequestForm		&operator=(RobotomyRequestForm const &copy);

		virtual void				execute(Bureaucrat const &executor) const;

	private:
		std::string					_target;
};

#endif //PRESIDENTIALPARDONFORM_HPP
