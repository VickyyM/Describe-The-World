#include "Room.h"

Room::Room()
{
	m_numofpc = 0;
	m_isbusy = false;
}

Room::Room(int numofpc, vector<Computer*> computers, bool isbusy)
{
	m_numofpc = numofpc;
	m_computers = computers;
	m_isbusy = isbusy;
}

Room::Room(const Room& other)
{
	this->m_numofpc = other.m_numofpc;
	this->m_computers = other.m_computers;
	this->m_isbusy = other.m_isbusy;
}

Room::~Room()
{
	m_computers.clear();
}

void Room::SetNumofpc(int numofpc)
{
	m_numofpc = numofpc;
}

void Room::SetComputers(vector<Computer*> computers)
{
	m_computers = computers;
}

void Room::SetIsbusy(bool isbusy)
{
	m_isbusy = isbusy;
}

int Room::GetNumofpc()
{
	return m_numofpc;
}

vector<Computer*> Room::GetComputers()
{
	return m_computers;
}

bool Room::Isbusy()
{
	return m_isbusy;
}

void Room::Print()
{
	cout << "Number of pcs: " << m_numofpc << endl;
	cout << "Is busy: " << m_isbusy << endl;
}

void Room::PrintComputers()
{
	for (int i = 0; i < m_computers.size(); i++)
	{
		cout << m_computers.at(i)->GetId() << endl;
	}
}
