#pragma once
#include "Computer.h"
#include <vector>

class Room
{
private:
	int m_numofpc;
	vector <Computer*> m_computers;
	bool m_isbusy;
public:
	Room();
	Room(int numofpc, vector <Computer*> computers, bool isbusy);
	Room(const Room& other);
	~Room();

	void SetNumofpc(int numofpc);
	void SetComputers(vector <Computer*> computers);
	void SetIsbusy(bool isbusy);

	int GetNumofpc();
	vector <Computer*> GetComputers();
	bool Isbusy();

	void Print();
	void PrintComputers();
};
