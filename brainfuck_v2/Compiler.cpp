#include"Compiler.h"

std::vector<std::shared_ptr<Command>> Brainfuck_compiler::execute(const std::string & brainfuckcode)
{
	std::vector<std::shared_ptr<Command>> res;
	std::unique_ptr<Invoker> inv(new Brainfuck_invoker);
	for (const auto & i : brainfuckcode)
	{
		if(inv->invoke(i))
			res.emplace_back(inv->invoke(i));
	}
	return res;
}