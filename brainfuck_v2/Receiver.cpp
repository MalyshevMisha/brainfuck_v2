#include"Receiver.h"

Storage::Storage()
{
	current_pos = 0;
}

char Storage::get_velue()
{
	if (current_pos >= data.size())
	{
		data.resize(current_pos + 1);
	}
	return data[current_pos];
}

void Storage::set_velue(char & velue)
{
	if (current_pos >= data.size())
	{
		data.resize(current_pos + 1);
	}
	data[current_pos] = velue;
}

void Storage::next_pos()
{
	++current_pos;
}

void Storage::prev_pos()
{
	--current_pos;
}