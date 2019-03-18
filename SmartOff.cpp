// SmartOff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "cl/CommandLineHelper.h"

int main(int argc, char **argv)
{

	CommandLineHelper* clHelper = new CommandLineHelper((const char **)argv, (const int) argc);

	clHelper->createActionChain();

    
}