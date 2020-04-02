#include "Logger.hpp"

int		main(void)
{
	Logger	logger("file.log");

	logger.log("console", "Hey");
	logger.log("console", "How are you ?");
	logger.log("console", "Is this working ?");
	logger.log("console", "I think so!");
	logger.log("console", "Bye");

	logger.log("file", "Hey");
	logger.log("file", "How are you ?");
	logger.log("file", "Is this working ?");
	logger.log("file", "I think so!");
	logger.log("file", "Bye");
}
