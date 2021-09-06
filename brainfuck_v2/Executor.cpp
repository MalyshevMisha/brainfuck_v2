#include"Executor.h"

std::string Brainfuck_executor::execute(const std::vector<std::shared_ptr<Command>> & brainfuck_commands)
{
	std::shared_ptr<Receiver> storage(new Storage());
	std::string res;
	for (int i = 0; i < brainfuck_commands.size(); ++i)
	{
		auto com = brainfuck_commands[i]->execute(storage);
		switch (com.status_code)
		{
		case(1):
			res.push_back(com.result);
			break;
		case(2):
		{
			int count = 0;
			for (int k = i; k <= brainfuck_commands.size(); ++k)
			{
				if (typeid(*brainfuck_commands[k]).name() == typeid(Start_loop_command).name())
					++count;
				if (typeid(*brainfuck_commands[k]).name() == typeid(End_loop_command).name())
					--count;
				if (!count)
				{
					i = k;
					break;
				}
			}
		}
		break;
		case(3):
			int counter = 0;
			for (int k = i; k > 0; --k)
			{
				if (typeid(*brainfuck_commands[k]).name() == typeid(Start_loop_command).name())
					++counter;
				if (typeid(*brainfuck_commands[k]).name() == typeid(End_loop_command).name())
					--counter;
				if (!counter)
				{
					i = k;
					break;
				}
			}
			break;
		}
	}
	return res;
}