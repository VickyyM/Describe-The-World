#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
	string m_type;
	int m_year;
	int m_numoftires;
public:
	Vehicle();
	Vehicle(string type, int year, int numoftires);
	Vehicle(const Vehicle& other);
	~Vehicle();

	virtual void SetType(string type);
	void SetYear(int year);
	void SetNumOfTires(int numoftires);

	string GetType();
	int GetYear();
	int GetNumOfTires();

	void Print();
};

