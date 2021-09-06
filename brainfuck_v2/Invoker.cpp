#include"Invoker.h"

std::shared_ptr<Command> Brainfuck_invoker::invoke(const char & input_symbol) 
{
	switch (input_symbol)
	{
	case '>':
		return std::make_shared<Next_command>();
		break;
	case '<':
		return std::make_shared<Prev_command>();
		break;
	case '+':
		return std::make_shared<Incr_command>();
		break;
	case '-':
		return std::make_shared<Decr_command>();
		break;
	case '.':
		return std::make_shared<Print_command>();
		break;
	case '[':
		return std::make_shared<Start_loop_command>();
		break;
	case ']':
		return std::make_shared<End_loop_command>();
		break;
	}
	return NULL;
}