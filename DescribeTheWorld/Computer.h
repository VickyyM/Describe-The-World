#pragma once
#include <iostream>
#include <string>
using namespace std;

class Computer
{
private:
	string m_MotherBoard;
	string m_CPU;
	string m_GPU;
	int m_StorageMemory;
	int m_RamMemory;
	int m_id;
public:
	Computer();
	Computer(string MotherBoard, string CPU, string GPU, int StorageMemory, int RamMemory, int id);
	Computer(const Computer& other);
	~Computer();

	void SetMotherBoard(string name_arg);
	void SetCPU(string name_arg);
	void SetGPU(string name_arg);
	void SetStorageMemory(int size_arg);
	void SetRamMemory(int size_arg);
	void SetId(int id);

	string GetMotherBoard();
	string GetCPU();
	string GetGPU();
	int GetStorageMemory();
	int GetRamMemory();
	int GetId();

	void Print();
};
