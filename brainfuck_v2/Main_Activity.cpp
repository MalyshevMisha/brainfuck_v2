#include"Main_Activity.h"
#include"Func_tests.h"

void Main_activity::execute()
{
	if (Func_tests::test1())
		std::cout << "Somethin wrong with test 1" << std::endl;
	if (Func_tests::test2())
		std::cout << "Somethin wrong with test 2" << std::endl;
	if (Func_tests::test3())
		std::cout << "Somethin wrong with test 3" << std::endl;

	std::unique_ptr<View> view(new Console_interface());
	std::unique_ptr<Compiler> compiler(new Brainfuck_compiler());
	std::unique_ptr<Executor> executor(new Brainfuck_executor());

	view->print_res(executor->execute(compiler->execute(view->set_code())));
}