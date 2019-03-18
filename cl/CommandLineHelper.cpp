#include "CommandLineHelper.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::map;

CommandLineHelper::CommandLineHelper (const char** argv, const int argc )
{
	parse(argv, argc);
}

CommandLineHelper::~CommandLineHelper()
{
	tokens.clear();
}

void CommandLineHelper::createActionChain()
{
	for (vector<ParamStruct>::iterator it = tokens.begin(); it != tokens.end(); ++it)
	{
		if (it->param_name == "--help" || it->param_name == "-h")
		{
			printHelpUsage();
			break;
		}
		else if (it->param_name == "--countdown" || it->param_name == "-c")
		{
			createCountdownAction();
		}
	}
}

void CommandLineHelper::createCountdownAction()
{
	map<string, string> params;
	if (!isParamExists("-m") && !isParamExists("-h"))
	{
		printHelpUsage();
	}

	if (isParamExists("-m")))
	{
		pa
	}

}

bool CommandLineHelper::isParamExists(std::string paramName)
{
	for (vector<ParamStruct>::iterator it = tokens.begin(); it != tokens.end(); ++it)
	{
		if (it->param_name.compare(paramName))
		{}
	}
	return false;
}

void CommandLineHelper::printHeader()
{
	cout << "*********************************************************************************************" << endl;
	cout << "*                                                                                           *" << endl;
	cout << "* SmartOff v1.0 (BETA)                                                                      *" << endl;
	cout << "* Application for automatic shutdown computer in various methods configured by command line *" << endl;
	cout << "*                                                                                           *" << endl;
	cout << "*********************************************************************************************" << endl;
}

void CommandLineHelper::printHelpUsage()
{
	printHeader();

	cout << "Usage:" << endl;
	cout << endl;
	cout << "SmartOff -c|--countdown -h hour(s)" << endl;
	cout << "SmartOff -c|--countdown -m minute(s)" << endl;
	cout << "SmartOff -v|--video-stop -w value (wait interval in minutes)" << endl;
}

void CommandLineHelper::parse(const char** argv, const int argc)
{
	for (int i = 1; i <= argc; i++)
	{
		if (argv[i] != NULL)
		{
			string param_name = string(argv[i]);
			if (param_name[0] == '-')
			{
				ParamStruct param_struct;
				param_struct.param_name = param_name;

				if (i + 1 < argc && string(argv[i + 1])[0] != '-')
				{
					param_struct.param_value = string(argv[i + 1]);
					i++;
				}

				tokens.push_back(param_struct);
			}
		}
	}

}