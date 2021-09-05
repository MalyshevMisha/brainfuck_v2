#include"Command.h"

Command_status generate_ok_comand_status();

Command_status generate_ok_comand_status()
{
	Command_status status;
	status.status_code = 0;
	status.description = "OK";
	return status;
}

Command_status generate_print_comand_status(char & returned);

Command_status generate_print_comand_status(char & returned)
{
	Command_status status;
	status.status_code = 1;
	status.description = "Print";
	status.result = returned;
	return status;
}

Command_status generate_start_loop_comand_status();

Command_status generate_start_loop_comand_status()
{
	Command_status status;
	status.status_code = 2;
	status.description = "Start loop";
	return status;
}

Command_status generate_end_loop_comand_status();

Command_status generate_end_loop_comand_status()
{
	Command_status status;
	status.status_code = 3;
	status.description = "End loop";
	return status;
}

Command_status Next_command::execute(std::shared_ptr<Receiver> storage)
{
	storage->next_pos();
	return generate_ok_comand_status();
}

Command_status Prev_command::execute(std::shared_ptr<Receiver> storage)
{
	storage->prev_pos();
	return generate_ok_comand_status();
}

Command_status Incr_command::execute(std::shared_ptr<Receiver> storage)
{
	char velue = storage->get_velue();
	++velue;
	storage->set_velue(velue);
	return generate_ok_comand_status();
}

Command_status Decr_command::execute(std::shared_ptr<Receiver> storage)
{
	char velue = storage->get_velue();
	--velue;
	storage->set_velue(velue);
	return generate_ok_comand_status();
}

Command_status Print_command::execute(std::shared_ptr<Receiver> storage)
{
	char velue = storage->get_velue();
	return generate_print_comand_status(velue);
}

Command_status Start_loop_command::execute(std::shared_ptr<Receiver> storage)
{
	if (storage->get_velue())
	{
		return generate_ok_comand_status();
	}
	else
	{
		return generate_start_loop_comand_status();
	}
}

Command_status End_loop_command::execute(std::shared_ptr<Receiver> storage)
{
	if (storage->get_velue())
	{
		return generate_end_loop_comand_status();
	}
	else
	{
		return generate_ok_comand_status();
	}
}
