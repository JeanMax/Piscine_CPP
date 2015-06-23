// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Intern.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/22 05:24:24 by mcanal            #+#    #+#             //
//   Updated: 2015/06/23 18:08:53 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef INTERN_HPP

/*
** defines
*/
# define INTERN_HPP

/*
** includes
*/
# include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

/*
** class
*/
class Intern
{
	public:
		Intern(void);
		Intern(Intern const &copy);
		~Intern(void);
		Intern		&operator=(Intern const &copy);

		Form		*makeForm(std::string const &name, std::string const &target);

	private:

};

#endif //INTERN_HPP
