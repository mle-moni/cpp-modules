#include "Brain.hpp"

Brain::Brain(int	brainIQ)
{
	IQ = brainIQ;
}

Brain::~Brain()
{

}

std::string	Brain::identify(void) const
{
	std::ostringstream	oss;
	std::string			final;

	oss << (void*)this;
	final = oss.str();
	for (unsigned long i = 0; i < final.length(); i++) {
		if (i > 1) {
			final[i] = std::toupper(final[i]);
		}
	}
	return (final);
}

int			Brain::getIQ(void) const
{
	return (IQ);
}