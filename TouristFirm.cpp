#include "TouristFirm.h"
#include <format>
#include "Tour.h"
#include <iostream>
using namespace std;


TouristFirm::TouristFirm()
{
	tours = nullptr;
	count = 0;
}

TouristFirm::~TouristFirm()
{
	delete[] tours; tours = nullptr;
}

//=============================================
void TouristFirm::createTours()
{
	cout << "Enter number of tours: "; cin >> count;
	tours = new Tour[count];

	for (int i = 0; i < count; i++)
	{
		cout << format("Tour {} :\n", i + 1);
//==================================================

		char name[100];
		cout << "Name: "; cin >> name;
		tours[i].setTourName(name);

		char direction[100];
		cout << "Direction: "; cin >> direction;
		tours[i].setDirection(direction);

		int dailyPrice;
		cout << "Daily price: "; cin >> dailyPrice;
		tours[i].setDailyPrice(dailyPrice);

		int days;
		cout << "Days: "; cin >> days;
		tours[i].setDays(days);

		char nutrition[100];
		cout << "Nutrition: "; cin >> nutrition;
		tours[i].setNutrition(nutrition);

		double fare;
		cout << "Fare: "; cin >> fare;
		tours[i].setFare(fare);

	}

}

void TouristFirm::showAll()
{
	for (int i = 0; i < count; i++)
	{
		tours[i].showInfo();
	}
}

void TouristFirm::addTour()
{
}

void TouristFirm::deleteTour()
{
}

void TouristFirm::findTour()
{
}

void TouristFirm::sortByDirection()
{
}

void TouristFirm::sortByFare()
{
}
