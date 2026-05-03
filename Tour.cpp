#include "Tour.h"
#include <iostream>
#include <cstring>
#include <format>
using namespace std;

Tour::Tour() 
{
	const char* def = "Undefined";

	int len = strlen(def) + 1;
	tourName = new char[len];
	strcpy_s(tourName, len, def);

	direction = new char[len];
	strcpy_s(direction, len, def);

	nutrition = new char[len];
	strcpy_s(nutrition, len, def);

	dailyPrice = 0; 
	days = 0;
	fare = 0.0; 
}

Tour::Tour(const char* tourName, const char* direction, int dailyPrice, int days, const char* nutrition, double fare)
{
	int lenName = strlen(tourName) + 1;
	this->tourName = new char[lenName];
	strcpy_s(this->tourName, lenName, tourName);

	int lenDir = strlen(direction) + 1;
	this->direction = new char[lenDir];
	strcpy_s(this->direction, lenDir, direction);

	int lenNutr = strlen(nutrition) + 1;
	this->nutrition = new char[lenNutr];
	strcpy_s(this->nutrition, lenNutr, nutrition);

	this->dailyPrice = dailyPrice;
	this->days = days;
	this->fare = fare;
}



Tour::~Tour() 
{
	delete[] tourName; tourName = nullptr;
	delete[] direction; direction = nullptr;
	delete[] nutrition; nutrition = nullptr;
}


//=======================================================
const char* Tour::getTourName() const
{
	return tourName;
}

const char* Tour::getDirection() const
{
	return direction;
}

int Tour::getDailyPrice() const
{
	return dailyPrice;
}

int Tour::getDays() const
{
	return days;
}

const char* Tour::getNutrition() const
{
	return nutrition;
}

double Tour::getFare() const
{
	return fare;
}


//=======================================================
void Tour::setTourName(const char* tourName)
{
	delete[] this->tourName;
	int len = strlen(tourName) +1;
	this->tourName = new char[len];
	strcpy_s(this->tourName, len, tourName);


}

void Tour::setDirection(const char* direction) 
{
	delete[] this->direction;  
	int len = strlen(direction) + 1;
	this->direction = new char[len];
	strcpy_s(this->direction, len, direction);
}

void Tour::setDailyPrice(int dailyPrice)
{
	this->dailyPrice = dailyPrice; 
}

void Tour::setDays(int days)
{
	this->days = days;
}

void Tour::setNutrition(const char* nutrition) 
{
	delete[] this->nutrition;
	int len = strlen(nutrition) + 1;
	this->nutrition = new char[len];
	strcpy_s(this->nutrition, len, nutrition);
}

void Tour::setFare(double fare)
{
	this->fare = fare;
}


//=======================================================
void Tour::showInfo() const
{
	cout << format("\tTour: {}\n", tourName);
	cout << format("\tDirection: {}\n", direction);
	cout << format("\tDaily price: {}\n", dailyPrice);
	cout << format("\tDays: {}\n", days);
	cout << format("\tNutrition: {}\n", nutrition);
	cout << format("\tFare: {}\n", fare);

}

Tour::Tour(const Tour& other)
{
	int lenName = strlen(other.tourName) + 1;
	tourName = new char[lenName];
	strcpy_s(tourName, lenName, other.tourName);

	int lenDir = strlen(other.direction) + 1;
	direction = new char[lenDir];
	strcpy_s(direction, lenDir, other.direction);

	int lenNutr = strlen(other.nutrition) + 1;
	nutrition = new char[lenNutr];
	strcpy_s(nutrition, lenNutr, other.nutrition);

	dailyPrice = other.dailyPrice;
	days = other.days;
	fare = other.fare;


}

Tour& Tour::operator=(const Tour& other)
{
	if (this == &other) return *this;

	delete[] tourName;
	delete[] direction;
	delete[] nutrition;

	int lenName = strlen(other.tourName) + 1;
	tourName = new char[lenName];
	strcpy_s(tourName, lenName, other.tourName);

	int lenDir = strlen(other.direction) + 1;
	direction = new char[lenDir];
	strcpy_s(direction, lenDir, other.direction);

	int lenNutr = strlen(other.nutrition) + 1;
	nutrition = new char[lenNutr];
	strcpy_s(nutrition, lenNutr, other.nutrition);

	dailyPrice = other.dailyPrice;
	days = other.days;
	fare = other.fare;

	return *this;



}








	