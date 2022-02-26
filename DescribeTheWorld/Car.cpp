#include "Car.h"

Car::Car()
{
	m_brand = "None";
	m_fuel = "None";
	m_color = "None";
	m_numofdoors = 0;
	m_price = 0;
}

Car::Car(string brand, string fuel, string color, int numofdoors, int price)
{
	m_brand = brand;
	m_fuel = fuel;
	m_color = color;
	m_numofdoors = numofdoors;
	m_price = price;
}

Car::Car(const Car& other)
{
	this->m_brand = other.m_brand;
	this->m_fuel = other.m_fuel;
	this->m_color = other.m_color;
	this->m_numofdoors = other.m_numofdoors;
	this->m_price = other.m_price;
}

Car::~Car()
{
	
}

void Car::SetBrand(string brand)
{
	m_brand = brand;
}

void Car::SetFuel(string fuel)
{
	m_fuel = fuel;
}

void Car::SetColor(string color)
{
	m_color = color;
}

void Car::SetNumOfDoors(int numofdoors)
{
	m_numofdoors = numofdoors;
}

void Car::SetPrice(int price)
{
	m_price = price;
}

string Car::GetBrand()
{
	return m_brand;
}

string Car::GetFuel()
{
	return m_fuel;
}

string Car::GetColor()
{
	return m_color;
}

int Car::GetNumOfDoors()
{
	return m_numofdoors;
}

int Car::GetPrice()
{
	return m_price;
}

void Car::Print()
{
	cout << "Brand: " << m_brand << endl;
	cout << "Fuel: " << m_fuel << endl;
	cout << "Color: " << m_color << endl;
	cout << "Number of doors: " << m_numofdoors << endl;
	cout << "Price: " << m_price << endl;
}
