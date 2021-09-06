#pragma once
#include"Invoker.h"
#include<vector>

class Compiler
{
public:
	virtual ~Compiler() {}
	virtual std::vector<std::shared_ptr<Command>> execute(const std::string &) = 0;
};

class Brainfuck_compiler : public Compiler
{
public:
	std::vector<std::shared_ptr<Command>> execute(const std::string &) override;
};