#include "Person.h"

Person::Person()
{
	m_name = "None";
	m_age = 0;
	m_sex = "None";
	m_birth = 0;
	m_id = 0;
	m_height = 0;
	m_eyecolor = "None";
	m_zodiacsign = "None";
}

Person::Person(string name, int age, string sex, int birth, int id, int height, string eyecolor, string zodiacsign)
{
	m_name = name;
	m_age = age;
	m_sex = sex;
	m_birth = birth;
	m_id = id;
	m_height = height;
	m_eyecolor = eyecolor;
	m_zodiacsign = zodiacsign;
}

Person::Person(const Person& other)
{
	this->m_name = other.m_name;
	this->m_age = other.m_age;
	this->m_sex = other.m_sex;
	this->m_birth = m_birth;
	this->m_id = other.m_id;
	this->m_height = other.m_height;
	this->m_eyecolor = other.m_eyecolor;
	this->m_zodiacsign = other.m_zodiacsign;
}

Person::~Person()
{

}

void Person::SetName(string name)
{
	m_name = name;
}

void Person::SetAge(int age)
{
	m_age = age;
}

void Person::SetSex(string sex)
{
	m_sex = sex;
}

void Person::SetBirth(int birth)
{
	m_birth = birth;
}

void Person::SetId(int id)
{
	m_id = id;
}

void Person::SetHeight(int height)
{
	m_height = height;
}

void Person::SetEyecolor(string eyecolor)
{
	m_eyecolor = eyecolor;
}

void Person::SetZodiacsign(string zodiacsign)
{
	m_zodiacsign = zodiacsign;
}

string Person::GetName()
{
	return m_name;
}

string Person::GetSex()
{
	return m_sex;
}

string Person::GetEyecolor()
{
	return m_eyecolor;
}

string Person::GetZodiacsign()
{
	return m_zodiacsign;
}

int Person::GetAge()
{
	return m_age;
}

int Person::GetBirth()
{
	return m_birth;
}

int Person::GetId()
{
	return m_id;
}

int Person::GetHeight()
{
	return m_height;
}

void Person::Print()
{
	cout << "Name: " << m_name << endl;
	cout << "Age: " << m_age << endl;
	cout << "Sex: " << m_sex << endl;
	cout << "Birth: " << m_birth << endl;
	cout << "Id: " << m_id << endl;
	cout << "Height: " << m_height << endl;
	cout << "Eyecolor: " << m_eyecolor << endl;
	cout << "Zodiacsign: " << m_zodiacsign << endl;
}
