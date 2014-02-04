#include <vector>
#include <iostream>
#include <string>

#include "ProgramCommand.h"

std::vector<ProgramCommand> commands =
	 {ProgramCommand(CommandID::HELP, {"help", "-h", "--help"}),
	  ProgramCommand(CommandID::POST, {"post", "p"})};

int interpretInput(int argc, char* argv[]);
void displayHelp();

int main (int argc, char* argv[])
{
	int retVal = interpretInput(argc, argv);	
	std::cout<<"Hello!\n";	

	return retVal;
}

int interpretInput(int argc, char* argv[])
{
	std::vector<std::string> args;
	for(int i = 0; i < argc; i++)
	{
		args.push_back(argv[i]);
	}
	if(args.size() == 1) //no args, display help
	{
		displayHelp();
		return 1;
	}
	std::string mainCommand = args.at(1);
	for(std::vector<ProgramCommand>::iterator commandIt(commands.begin()); commandIt != commands.end(); commandIt++)
	{
		if(commandIt->hasName(mainCommand))
		{
			std::cout<<"found command\n";	
		}
	}
	return 0;
}

void displayHelp()
{
	std::cout<<"Display Help\n";
}

