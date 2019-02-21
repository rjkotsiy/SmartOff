#include "CLHelper.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

CLHelper::CLHelper (const char** argv, const int argc ) {
	for (int i = 0; i <= argc; ++i) {
		tokens.push_back(string(argv[i]));
	}
}

void CLHelper::printHeader() {
	cout << "*********************************************************************************************" << endl;
	cout << "*                                                                                           *" << endl;
	cout << "* SmartOff v1.0 (BETA)                                                                      *" << endl;
	cout << "* Application for automatic shutdown computer in various methods configured by command line *" << endl;
	cout << "*                                                                                           *" << endl;
	cout << "*********************************************************************************************" << endl;
}

void CLHelper::printHelpUsage() {
	printHeader();
	cout << "Usage:" << endl;
	cout << endl;
	cout << "SmartOff -c|--countdown -h hour(s)" << endl;
	cout << "SmartOff -c|--countdown -m minute(s)" << endl;
	cout << "SmartOff -v|--video-stop -w value (wait interval in minutes)" << endl;

}

void CLHelper::parse() {
}

CLHelper::~CLHelper() {
}