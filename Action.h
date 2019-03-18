#pragma once

#include <map>
#include <string>

class AbstractAction
{

public:

	AbstractAction(std::map<std::string, std::string> params)
	{
		this->params = params;
	}

	virtual void doAction() = 0;

private:
	std::map<std::string, std::string> params;

};
