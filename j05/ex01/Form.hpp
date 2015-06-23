// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/22 05:14:30 by mcanal            #+#    #+#             //
//   Updated: 2015/06/23 16:02:59 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FORM_HPP

/*
** defines
*/
# define FORM_HPP

/*
** includes
*/
# include "Bureaucrat.hpp"

/*
** class
*/
class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		const int			_signGrade;
		const int			_execGrade;
		bool				_isSigned;

	public:
		Form(std::string const &name = "NamelessForm",
			 const int signGrade = 1,
			 const int execGrade = 1);
		Form(Form const &copy);
		~Form(void);
		Form			&operator=(Form const &copy);

		void				beSigned(Bureaucrat const &copy);
		std::string const	&getName(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;
		bool				getIsSigned(void) const;

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
std::ostream			&operator<<(std::ostream &o, Form const &copy);

#endif //FORM_HPP
