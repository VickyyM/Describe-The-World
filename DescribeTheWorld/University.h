#pragma once
#include <iostream>
#include <string>
using namespace std;

class University
{
private:
	string m_uniname;
	string m_town;
	string m_region;
	string m_site;
	int m_students;
	int m_telephone;
	int m_year;

public:
	University();
	University(string uniname, string town, string region, string site, int students, int telephone, int year);
	University(const University& other);
	~University();

	void SetUniName(string uniname);
	void SetTown(string town);
	void SetRegion(string region);
	void SetSite(string site);
	void SetStudents(int students);
	void SetTelephone(int telephone);
	void SetYear(int year);

	string GetUniName();
	string GetTown();
	string GetRegion();
	string GetSite();
	int GetStudents();
	int GetTelephone();
	int GetYear();

	void Print();
};
