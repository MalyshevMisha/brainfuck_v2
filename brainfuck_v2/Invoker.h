#pragma once
#include"Command.h"
#include<memory>

class Invoker
{
public:
	virtual ~Invoker() {};
	virtual std::shared_ptr<Command> invoke(const char &) = 0;
};

class Brainfuck_invoker : public Invoker
{
public:
	std::shared_ptr<Command> invoke(const char &) override;
};