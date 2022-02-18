#include "Computer.h"

Computer::Computer()
{
	m_MotherBoard = "None";
	m_CPU = "None";
	m_GPU = "None";
	m_StorageMemory = 0;
	m_RamMemory = 0;
}

Computer::Computer(string MotherBoard, string CPU, string GPU, int StorageMemory, int RamMemory, int id)
{
	m_MotherBoard = MotherBoard;
	m_CPU = CPU;
	m_GPU = GPU;
	m_StorageMemory = StorageMemory;
	m_RamMemory = RamMemory;
	m_id = id;
}


Computer::Computer(const Computer& other)
{
	this->m_MotherBoard = other.m_MotherBoard;
	this->m_CPU = other.m_CPU;
	this->m_GPU = other.m_GPU;
	this->m_StorageMemory = other.m_StorageMemory;
	this->m_RamMemory = other.m_RamMemory;
}

Computer::~Computer()
{
}

void Computer::SetMotherBoard(string name_arg)
{
	m_MotherBoard = name_arg;
}

void Computer::SetCPU(string name_arg)
{
	m_CPU = name_arg;
}

void Computer::SetGPU(string name_arg)
{
	m_GPU = name_arg;
}

void Computer::SetStorageMemory(int size_arg)
{
	m_StorageMemory = size_arg;
}

void Computer::SetRamMemory(int size_arg)
{
	m_RamMemory = size_arg;
}

void Computer::SetId(int id)
{
	m_id = id;
}

string Computer::GetMotherBoard()
{
	return m_MotherBoard;
}

string Computer::GetCPU()
{
	return m_CPU;
}

string Computer::GetGPU()
{
	return m_GPU;
}

int Computer::GetStorageMemory()
{
	return m_StorageMemory;
}

int Computer::GetRamMemory()
{
	return m_RamMemory;
}

int Computer::GetId()
{
	return m_id;
}

void Computer::Print()
{
	cout << "MotherBoard: " << m_MotherBoard << endl;
	cout << "CPU: " << m_CPU << endl;
	cout << "GPU: " << m_GPU << endl;
	cout << "StorageMemory: " << m_StorageMemory << endl;
	cout << "RamMemory: " << m_RamMemory << endl;
}
