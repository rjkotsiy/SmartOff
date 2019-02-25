#pragma once
#include <vector>
#include <string>

class CLHelper
{
public:

	CLHelper(const char** argv, const int argc);
	~CLHelper();

	void parse();

private:

	struct ParamStruct
	{
		std::string param_name;
		std::string param_value;
	};

	void printHeader();
	void printHelpUsage();

	std::vector<ParamStruct> tokens;

};


