// SmartOff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "cl/CLHelper.h"

int main(int argc, char **argv)
{

	CLHelper* clHelper = new CLHelper((const char **)argv, (const int) argc);

	clHelper->parse();

    
}