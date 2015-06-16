// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Logger.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 22:26:34 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 22:39:28 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef LOGGER_HPP

/*
** defines
*/
# define LOGGER_HPP

/*
** enum
*/
enum zboub { TO_CONSOLE, TO_FILE };

/*
** includes
*/
# include <iostream>

/*
** class
*/
class Logger
{
	public:
		Logger(std::string const &file = "NoFileSpecified");
		~Logger(void);
        void            log(std::string const &dest,
                            std::string const &message) const;

	private:
		void            logToConsole(std::string const &log) const;
		void        	logToFile(std::string const &log) const;
		std::string		makeLogEntry(std::string const &log) const;

		std::string     _file;
};

/*
** typedef
*/
typedef void    (Logger::*FunctionPointer)(std::string const &log);

#endif //LOGGER_HPP
