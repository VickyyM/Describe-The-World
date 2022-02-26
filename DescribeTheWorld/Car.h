#pragma once
#include "Vehicle.h"

class Car : public Vehicle
{
private:
	string m_brand;
	string m_fuel;
	string m_color;
	int m_numofdoors;
	int m_price;
public:
	Car();
	Car(string brand, string fuel, string color, int numofdoors, int price);
	Car(const Car& other);
	~Car();

	void SetBrand(string brand);
	void SetFuel(string fuel);
	void SetColor(string color);
	void SetNumOfDoors(int numofdoors);
	void SetPrice(int price);

	string GetBrand();
	string GetFuel();
	string GetColor();
	int GetNumOfDoors();
	int GetPrice();

	void Print();
};
