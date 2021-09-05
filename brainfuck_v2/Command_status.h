#pragma once
#include<string>

class Command_status
{
public:
	Command_status()
	{
		status_code = 0;
		result = 0;
	}
	virtual ~Command_status() {}
	unsigned int status_code;
	std::string description;
	char result;
};