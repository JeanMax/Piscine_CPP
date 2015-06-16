// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Logger.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 22:26:34 by mcanal            #+#    #+#             //
//   Updated: 2015/06/17 00:51:19 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef LOGGER_HPP

/*
** defines
*/
# define LOGGER_HPP
# define LOG_FILE "ireallyhopethisisnotloggerdotcpp.log"

/*
** enum
*/
enum zboub { TO_CONSOLE, TO_FILE };

/*
** includes
*/
# include <iostream>
# include <fstream>
# include <ctime>

/*
** class
*/
class Logger
{
	public:
		Logger(std::string const &fileName = "NoFileSpecified");
		~Logger(void);
		void			log(std::string const &dest,
						std::string const &message) const;

	private:
		void			logToConsole(std::string const &log) const;
		void			logToFile(std::string const &log) const;
		std::string		makeLogEntry(std::string const &log) const;

		std::string		_fileName;
};

/*
** typedef
*/
typedef void		(Logger::*FunctionPointer)(std::string const &log) const;

#endif //LOGGER_HPP
