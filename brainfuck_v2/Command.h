#pragma once
#include"Command_status.h"
#include"Receiver.h"

class Command
{
public:
	virtual ~Command() {}
	virtual Command_status execute(std::shared_ptr<Receiver>) = 0;
};

class Next_command :public Command
{
public:
	Command_status execute(std::shared_ptr<Receiver>) override;
};

class Prev_command :public Command
{
public:
	Command_status execute(std::shared_ptr<Receiver>) override;
};

class Incr_command :public Command
{
public:
	Command_status execute(std::shared_ptr<Receiver>) override;
};

class Decr_command :public Command
{
public:
	Command_status execute(std::shared_ptr<Receiver>) override;
};

class Print_command :public Command
{
public:
	Command_status execute(std::shared_ptr<Receiver>) override;
};

class Start_loop_command :public Command
{
public:
	Command_status execute(std::shared_ptr<Receiver>) override;
};

class End_loop_command :public Command
{
public:
	Command_status execute(std::shared_ptr<Receiver>) override;
};