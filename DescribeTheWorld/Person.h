#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
	string m_name;
	int m_age;
	string m_sex;
	int m_birth;
	int m_id;
	int m_height;
	string m_eyecolor;
	string m_zodiacsign;

public:
	Person();
	Person(string name, int age, string sex, int birth, int id, int height, string eyecolor, string zodiacsign);
	Person(const Person& other);
	~Person();

	virtual void SetName(string name);
	void SetAge(int age);
	void SetSex(string sex);
	void SetBirth(int birth);
	void SetId(int id);
	void SetHeight(int height);
	void SetEyecolor(string eyecolor);
	void SetZodiacsign(string zodiacsign);

	 string GetName();
	 string GetSex();
	 string GetEyecolor();
	 string GetZodiacsign();
	 int GetAge();
	 int GetBirth();
	 int GetId();
	 int GetHeight();

	 void Print();

};
