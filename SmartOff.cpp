// SmartOff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "cl/CLHelper.h"

int main(int argc, char **argv)
{

	CLHelper* clHelper = new CLHelper(argv, argc);

	clHelper->parse();

    
}