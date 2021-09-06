#pragma once
#include"Receiver.h"
#include"Command.h"
#include<vector>

class Executor
{
public:
	virtual ~Executor() {}
	virtual std::string execute(const std::vector<std::shared_ptr<Command>> &) = 0;
};

class Brainfuck_executor : public Executor
{
public:
	std::string execute(const std::vector<std::shared_ptr<Command>> &) override;
};