#include"Compiler.h"

std::vector<std::shared_ptr<Command>> Brainfuck_compiler::execute(std::string brainfuckcode)
{
	std::vector<std::shared_ptr<Command>> res;
	std::unique_ptr<Invoker> inv(new Brainfuck_invoker);
	for (const auto & i : brainfuckcode)
	{
		res.push_back(std::make_shared<Command>(inv->invoke(i)));
	}
	return res;
}