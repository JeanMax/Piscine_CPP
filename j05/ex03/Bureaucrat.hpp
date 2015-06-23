// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/22 05:14:30 by mcanal            #+#    #+#             //
//   Updated: 2015/06/23 17:35:54 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BUREAUCRAT_HPP

/*
** defines
*/
# define BUREAUCRAT_HPP
# define DEBUG 1

/*
** includes
*/
# include <fstream>
# include <iostream>
# include <cstdlib>
# include "Form.hpp" //TODO: include loop?

/*
** class
*/
class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat(std::string const &name = "NamelessBureaucrat",
				   int grade = 150);
		Bureaucrat(Bureaucrat const &copy);
		~Bureaucrat(void);
		Bureaucrat			&operator=(Bureaucrat const &copy);

		Bureaucrat			&operator+=(int i);
		Bureaucrat			&operator-=(int i);
		std::string const	&getName(void) const;
		int					getGrade(void) const;
		void				setGrade(int grade);
		void				signForm(Form const &form) const;
		void				executeForm(Form const &form) const;

		/*
		** nested class
		*/
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void) throw();
				GradeTooHighException(GradeTooHighException const &copy) throw();
				virtual ~GradeTooHighException(void) throw();
				GradeTooHighException	&operator=(GradeTooHighException const &copy) throw();
				virtual const char		*what(void) const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void) throw();
				GradeTooLowException(GradeTooLowException const &copy) throw();
				virtual ~GradeTooLowException(void) throw();
				GradeTooLowException	&operator=(GradeTooLowException const &copy) throw();
				virtual const char		*what(void) const throw();
		};
};

/*
** prototypes
*/
std::ostream			&operator<<(std::ostream &o, Bureaucrat const &copy);

#endif //BUREAUCRAT_HPP
