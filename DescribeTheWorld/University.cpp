#include "University.h"

University::University()
{
	m_uniname = "None";
	m_town = "None";
	m_region = "None";
	m_site = "None";
	m_students = 0;
	m_telephone = 0;
	m_year = 0;
}

University::University(string uniname, string town, string region, string site, int students, int telephone, int year)
{
	m_uniname = uniname;
	m_town = town;
	m_region = region;
	m_site = site;
	m_students = students;
	m_telephone = telephone;
	m_year = year;
}

University::University(const University& other)
{
	this->m_uniname = other.m_uniname;
	this->m_town = other.m_town;
	this->m_region = other.m_region;
	this->m_site = other.m_site;
	this->m_students = other.m_students;
	this->m_telephone = other.m_telephone;
	this->m_year = other.m_year;
}

University::~University()
{
}

void University::SetUniName(string uniname)
{
	m_uniname = uniname;
}

void University::SetTown(string town)
{
	m_town = town;
}

void University::SetRegion(string region)
{
	m_region = region;
}

void University::SetSite(string site)
{
	m_site = site;
}

void University::SetStudents(int students)
{
	m_students = students;
}

void University::SetTelephone(int telephone)
{
	m_telephone = telephone;
}

void University::SetYear(int year)
{
	m_year = year;
}

string University::GetUniName()
{
	return m_uniname;
}

string University::GetTown()
{
	return m_town;
}

string University::GetRegion()
{
	return m_region;
}

string University::GetSite()
{
	return m_site;
}

int University::GetStudents()
{
	return m_students;
}

int University::GetTelephone()
{
	return m_telephone;
}

int University::GetYear()
{
	return m_year;
}

void University::Print()
{
	cout << "UniName: " << m_uniname << endl;
	cout << "Town: " << m_town << endl;
	cout << "Region: " << m_region << endl;
	cout << "Site: " << m_site << endl;
	cout << "Students: " << m_students << endl;
	cout << "Telephone: " << m_telephone << endl;
	cout << "Year: " << m_year << endl;
}
