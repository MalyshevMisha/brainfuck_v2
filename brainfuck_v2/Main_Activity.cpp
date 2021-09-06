#include"Main_Activity.h"

void Main_activity::execute()
{
	std::unique_ptr<View> view(new Console_interface());
	std::unique_ptr<Compiler> compiler(new Brainfuck_compiler());
	std::unique_ptr<Executor> executor(new Brainfuck_executor());

	view->print_res(executor->execute(compiler->execute(view->set_code())));
}