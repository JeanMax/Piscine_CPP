// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Logger.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 22:26:09 by mcanal            #+#    #+#             //
//   Updated: 2015/06/17 01:08:06 by mcanal           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Logger.hpp"

/*
** constructor
*/
Logger::Logger(std::string const &fileName) : _fileName(fileName)
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
	std::cout << log << std::endl;
}

void				Logger::logToFile(std::string const &log) const
{
	std::fstream	fStream;

	fStream.exceptions (std::ifstream::failbit | std::ifstream::badbit);
	try
	{
		fStream.open(this->_fileName.c_str(),
					 std::fstream::in | 
					 std::fstream::out |
					 std::fstream::app);
		fStream << log << std::endl;
		fStream.close();
	}
	catch (std::ifstream::failure e)
	{
		std::cerr << "Error: could not open specified file." << std::endl;
	}
}

std::string			Logger::makeLogEntry(std::string const &log) const
{
	time_t		theTime = time(NULL);
	struct tm	*aTime = localtime(&theTime);
	char		s[32];

	strftime(s, sizeof(s), "[%Y%d%m_%H%M%S] ", aTime);

	return static_cast<std::string>(s + log);
}

/*
** public
*/
void				Logger::log(std::string const &dest,
								std::string const &message) const
{
	FunctionPointer f[2] = {
		&Logger::logToConsole,
		&Logger::logToFile
	};

	(this->*f[static_cast<int>(*(dest.c_str()))])(this->makeLogEntry(message));
}
