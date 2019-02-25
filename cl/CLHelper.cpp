#include "CLHelper.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::vector;

CLHelper::CLHelper (const char** argv, const int argc ) {
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

void CLHelper::parse()
{
	for (vector<ParamStruct>::iterator it = tokens.begin(); it != tokens.end(); ++it)
	{
		if (it->param_name == "--help" || it->param_name == "-h")
		{
			printHelpUsage();
			break;
		}
	}
}

void CLHelper::printHeader()
{
	cout << "*********************************************************************************************" << endl;
	cout << "*                                                                                           *" << endl;
	cout << "* SmartOff v1.0 (BETA)                                                                      *" << endl;
	cout << "* Application for automatic shutdown computer in various methods configured by command line *" << endl;
	cout << "*                                                                                           *" << endl;
	cout << "*********************************************************************************************" << endl;
}

void CLHelper::printHelpUsage()
{
	printHeader();

	cout << "Usage:" << endl;
	cout << endl;
	cout << "SmartOff -c|--countdown -h hour(s)" << endl;
	cout << "SmartOff -c|--countdown -m minute(s)" << endl;
	cout << "SmartOff -v|--video-stop -w value (wait interval in minutes)" << endl;

}

CLHelper::~CLHelper()
{
}