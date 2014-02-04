//ProgramCommand.h

#ifndef MSGBOARD_PROGRAMCOMMAND_H
#define MSGBOARD_PROGRAMCOMMAND_H

#include <vector>
#include <string>
#include <algorithm>

struct CommandID
{
	enum E
	{
		HELP = 0,
		POST
	};
};

class ProgramCommand
{
public:
	ProgramCommand(CommandID::E id, std::vector<std::string> names);
	
	CommandID::E getID();
	bool hasName(const std::string& name);
private:
	CommandID::E m_id;
	std::vector<std::string> m_commandNames;
};

#endif

