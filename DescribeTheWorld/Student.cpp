#include "Student.h"

Student::Student()
{
	m_uniname = "None";
	m_spec = "None";
}

Student::Student(string uniname, string spec)
{
	m_uniname = uniname;
	m_spec = spec;
}

Student::Student(const Student& other)
{
	this->m_uniname = other.m_uniname;
	this->m_spec = other.m_spec;
}

Student::~Student()
{
}

void Student::SetUniname(string uniname)
{
	m_uniname = uniname;
}

void Student::SetSpec(string spec)
{
	m_spec = spec;
}

string Student::GetUniname()
{
	return m_uniname;
}

string Student::GetSpec()
{
	return m_spec;
}

void Student::SetName(string name)
{
	m_name = "Student " + name;
}

void Student::Print()
{
	this->Person::Print();
	cout << "Uniname: " << m_uniname << endl;
	cout << "Spec: " << m_spec << endl;
}
