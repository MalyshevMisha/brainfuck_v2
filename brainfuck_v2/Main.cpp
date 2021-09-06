#include"Main_Activity.h"

int main()
{
	std::unique_ptr<Main_activity> act(new Main_activity());
	act->execute();
	return 0;
}