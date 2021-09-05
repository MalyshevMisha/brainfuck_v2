#pragma once
#include"Invoker.h"

class Compiler
{
public:
	virtual ~Compiler() {}
	virtual std::vector<std::shared_ptr<Command>> execute(std::string);
};

class Brainfuck_compiler : public Compiler
{
public:
	std::vector<std::shared_ptr<Command>> execute(std::string) override;
};