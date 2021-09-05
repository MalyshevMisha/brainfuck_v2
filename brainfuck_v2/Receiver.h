#pragma once
#include<vector>

class Receiver
{
public:
	virtual ~Receiver() {}
	virtual char get_velue() = 0;
	virtual void set_velue(char & velue) = 0;
	virtual void next_pos() = 0;
	virtual void prev_pos() = 0;
};

class Storage : public Receiver
{
private:
	std::vector<char> data;
	uint16_t current_pos;
public:
	Storage();
	char get_velue() override;
	void set_velue(char & velue) override;
	void next_pos() override;
	void prev_pos() override;
};