#pragma once
#include"Command.h"
#include<memory>

class Invoker
{
public:
	virtual ~Invoker() = default;
	virtual Command * invoke(const char &) = 0;
};

class Brainfuck_invoker : public Invoker
{
public:
	Command * invoke(const char &) override;
};