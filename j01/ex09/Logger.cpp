// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Logger.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 22:26:09 by mcanal            #+#    #+#             //
//   Updated: 2015/06/16 22:41:53 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Logger.hpp"

/*
** constructor
*/
Logger::Logger(std::string const &file) : _file(file)
{

}

/*
** destructor
*/
Logger::~Logger(void)
{

}

/*
** private
*/
void				Logger::logToConsole(std::string const &log) const
{
	std::cout << log << std::endl; //debug
}

void				Logger::logToFile(std::string const &log) const
{
	std::cout << log << std::endl; //debug
}

std::string         Logger::makeLogEntry(std::string const &log) const
{
	std::cout << log << std::endl; //debug
	return ""; //debug
}

/*
** public
*/
void				Logger::log(std::string const &dest,
								std::string const &message) const
{
	std::cout << dest << std::endl; //debug
	std::cout << message << std::endl; //debug
}
