#pragma once
#include<string>
#include<iostream>

class View
{
public:
	virtual ~View() {}
	virtual std::string set_code() = 0;
	virtual void print_res(const std::string &) = 0;
};

class Console_interface : public View
{
public:
	std::string set_code() override;
	void print_res(const std::string &) override;

};