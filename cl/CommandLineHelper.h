#pragma once
#include <vector>
#include <string>
#include "../Action.h"

class CommandLineHelper
{
public:

	CommandLineHelper(const char** argv, const int argc);
	~CommandLineHelper();

	void createActionChain();

private:

	struct ParamStruct
	{
		std::string param_name;
		std::string param_value;
	};

	void printHeader();
	void printHelpUsage();
	void parse(const char** argv, const int argc);
	void createCountdownAction();
	bool isParamExists(std::string paramName);

	AbstractAction *action;

	std::vector<ParamStruct> tokens;

};


