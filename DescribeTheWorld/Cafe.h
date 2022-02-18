#pragma once
#include <iostream>
#include <string>
using namespace std;

class Cafe
{
private:
	string m_name;
	string m_adress;
	string m_site;
	int m_telephone;
public:
	Cafe();
	Cafe(string name, string adress, string site, int telephone);
	Cafe(const Cafe& other);
	~Cafe();

	void SetName(string name);
	void SetAdress(string adress);
	void SetSite(string site);
	void SetTelephone(int telephone);

	string GetName();
	string GetAdress();
	string GetSite();
	int GetTelephone();

	void Print();
};
