#include "Vehicle.h"

Vehicle::Vehicle()
{
	m_type = "None";
	m_year = 0;
	m_numoftires = 0;
}

Vehicle::Vehicle(string type, int year, int numoftires)
{
	m_type = type;
	m_year = year;
	m_numoftires = numoftires;
}

Vehicle::Vehicle(const Vehicle& other)
{
	this->m_type = other.m_type;
	this->m_year = other.m_year;
	this->m_numoftires = other.m_numoftires;
}

Vehicle::~Vehicle()
{

}

void Vehicle::SetType(string type)
{
	m_type = type;
}

void Vehicle::SetYear(int year)
{
	m_year = year;
}

void Vehicle::SetNumOfTires(int numoftires)
{
	m_numoftires = numoftires;
}

string Vehicle::GetType()
{
	return m_type;
}

int Vehicle::GetYear()
{
	return m_year;
}

int Vehicle::GetNumOfTires()
{
	return m_numoftires;
}

void Vehicle::Print()
{
	cout << "Type: " << m_type << endl;
	cout << "Year: " << m_year << endl;
	cout << "Number of tires: " << m_numoftires << endl;
}
