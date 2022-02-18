#pragma once
#include "Person.h"

class Student : public Person
{
private:
	string m_uniname;
	string m_spec;
public:
	Student();
	Student(string uniname, string spec);
	Student(const Student& other);
	~Student();
	void SetUniname(string uniname);
	void SetSpec(string spec);
	string GetUniname();
	string GetSpec();
	void SetName(string name) override;
	void Print();
};
