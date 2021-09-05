#include"Invoker.h"

Command * Brainfuck_invoker::invoke(const char & input_symbol)
{
	switch (input_symbol)
	{
	case '>':
		return new Next_command();
		break;
	case '<':
		return new Prev_command();
		break;
	case '+':
		return new Incr_command();
		break;
	case '-':
		return new Decr_command();
		break;
	case '.':
		return new Print_command();
		break;
	case '[':
		return new Start_loop_command();
		break;
	case ']':
		return new End_loop_command();
		break;
	}
	return NULL;
}