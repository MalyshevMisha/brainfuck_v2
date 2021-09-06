#include"Func_tests.h"

bool Func_tests::test1()
{
	std::unique_ptr<Compiler> compiler(new Brainfuck_compiler());
	std::unique_ptr<Executor> executor(new Brainfuck_executor());

	std::string str = executor->execute(
		compiler->execute(
			"++++++[>++++++++++++<-]>.>++++++++++[>++++++++++<-]>+.+++++++..+++.>++++[>+++++++++++<-]>.<+++[>----<-]>.<<<<<+++[>+++++<-]>.>>.+++.------.--------.>>+."
		));

	if (str == "Hello, World!")
	{
		return 0;
	}
	return 1;
}

bool Func_tests::test2()
{
	std::unique_ptr<Compiler> compiler(new Brainfuck_compiler());
	std::unique_ptr<Executor> executor(new Brainfuck_executor());

	std::string str = executor->execute(
		compiler->execute(
			""
		));

	if (str == "")
	{
		return 0;
	}
	return 1;
}

bool Func_tests::test3()
{
	std::unique_ptr<Compiler> compiler(new Brainfuck_compiler());
	std::unique_ptr<Executor> executor(new Brainfuck_executor());

	std::string str = executor->execute(
		compiler->execute(
			"dfbb"
		));

	if (str == "")
	{
		return 0;
	}
	return 1;
}