#include"View.h"

std::string Console_interface::set_code()
{
	std::cout << "Enter brainfuck code" << std::endl;
	std::string str;
	std::cin >> str;
	return str;
}

void Console_interface::print_res(const std::string & output_data)
{
	std::cout << "Result:" << std::endl;
	std::cout << output_data << std::endl;
}