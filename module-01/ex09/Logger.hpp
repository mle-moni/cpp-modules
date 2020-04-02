#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <fstream>
#include <chrono>
#include <ctime>

class Logger
{
typedef void(Logger::*methods_type)(const std::string msg) const;
private:
	std::string		file_name;

	void		logToConsole(const std::string msg) const;
	void		logToFile(const std::string msg) const;
	std::string	makeLogEntry(const std::string& msg) const;
	methods_type	methods[2];
public:
	Logger(std::string l_file_name);
	~Logger();
	void		log(std::string const & dest, std::string const & message);
};

#endif