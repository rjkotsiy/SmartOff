#pragma once
#include <vector>
#include <string>

class CLHelper
{
public:

	CLHelper(const char** argv, const int argc);
	~CLHelper();

	void printHelpUsage();
	void parse();

private:

	std::vector<std::string> tokens;
	void printHeader();

};


