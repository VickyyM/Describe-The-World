#include "Cafe.h"

Cafe::Cafe()
{
	m_name = "None";
	m_adress = "None";
	m_site = "None";
	m_telephone = 0;
}

Cafe::Cafe(string name, string adress, string site, int telephone)
{
	m_name = name;
	m_adress = adress;
	m_site = site;
	m_telephone = telephone;
}

Cafe::Cafe(const Cafe& other)
{
	this->m_name = other.m_name;
	this->m_adress = other.m_adress;
	this->m_site = other.m_site;
	this->m_telephone = other.m_telephone;
}

Cafe::~Cafe()
{
}

void Cafe::SetName(string name)
{
	m_name = name;
}

void Cafe::SetAdress(string adress)
{
	m_adress = adress;
}

void Cafe::SetSite(string site)
{
	m_site = site;
}

void Cafe::SetTelephone(int telephone)
{
	m_telephone = telephone;
}

string Cafe::GetName()
{
	return m_name;
}

string Cafe::GetAdress()
{
	return m_adress;
}

string Cafe::GetSite()
{
	return m_site;
}

int Cafe::GetTelephone()
{
	return m_telephone;
}

void Cafe::Print()
{
	cout << "Name: " << m_name << endl;
	cout << "Adress: " << m_adress << endl;
	cout << "Site: " << m_site << endl;
	cout << "Telephone: " << m_telephone << endl;
}
