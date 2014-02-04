//ProgramCommand.cpp
#include "ProgramCommand.h"

ProgramCommand::ProgramCommand(CommandID::E id, std::vector<std::string> names)
	: m_id(id), m_commandNames(names)
{
}

CommandID::E ProgramCommand::getID()
{
	return m_id;
}

bool ProgramCommand::hasName(const std::string& name)
{
	return (std::find(m_commandNames.begin(), m_commandNames.end(), name) != m_commandNames.end());
}
