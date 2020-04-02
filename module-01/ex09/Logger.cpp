#include "Logger.hpp"

static int	miniHash(const std::string& str)
{
	int	final = 0;

	final += str.length();
	for (unsigned long i = 0; i < str.length(); i++) {
		final += (int)(str[i]);
	}
	return ((final % 5 / 2) % 2);
}

Logger::Logger(std::string l_file_name)
{
	file_name = l_file_name;
	methods[miniHash("file")] = &Logger::logToFile;
	methods[miniHash("console")] = &Logger::logToConsole;
}

Logger::~Logger()
{

}

void		Logger::logToConsole(const std::string msg) const
{
	std::cout << makeLogEntry(msg);
}

void		Logger::logToFile(const std::string msg) const
{
	std::ofstream	file;

	file.open(file_name, std::ios_base::app); // append instead of overwrite
	file << makeLogEntry(msg);
}

std::string	Logger::makeLogEntry(const std::string& msg) const
{
	std::time_t	now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
	char		*date = std::ctime(&now);
	std::string	log_entry(date);

	log_entry.pop_back();
	log_entry += ": ";
	log_entry += msg;
	log_entry += "\n";
	return (log_entry);
}

void		Logger::log(std::string const & dest, std::string const & message)
{
	(this->*(methods[miniHash(dest)]))(message);
}
