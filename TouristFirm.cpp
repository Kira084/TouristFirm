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
	Tour* newTours = new Tour[count + 1];
	for (int i = 0; i < count; i++)
	{
		newTours[i] = tours[i];
		
	}
	delete[] tours;
	//тут удалили старый массив и указали на новый
	tours = newTours;
	count++; 
//====================================================

	char name[100];
	cout << "Name: "; cin >> name;
	tours[count - 1].setTourName(name);

	char direction[100];
	cout << "Direction: "; cin >> direction;
	tours[count - 1].setDirection(direction);

	int dailyPrice;
	cout << "Daily price: "; cin >> dailyPrice;
	tours[count - 1].setDailyPrice(dailyPrice);

	int days;
	cout << "Days: "; cin >> days;
	tours[count - 1].setDays(days);

	char nutrition[100];
	cout << "Nutrition: "; cin >> nutrition;
	tours[count - 1].setNutrition(nutrition);

	double fare;
	cout << "Fare: "; cin >> fare;
	tours[count - 1].setFare(fare);



}

void TouristFirm::deleteTour()
{
	char name[100];
	cout << "Enter the tour name that you want to delete: "; cin >> name;


	int index = -1;

	for (int i = 0; i < count; i++)
	{
		if (strcmp(tours[i].getTourName(), name) == 0)
		{ 
			index = i;
		break;
		}
	}
	if (index == -1)
	{
		cout << "Tour not found!\n";
		return;
	}

	Tour* newTours = new Tour[count - 1];
	for (int i = 0, j = 0; i < count; i++)
	{
		if (i != index)
		{
			newTours[j] = tours[i];
			j++;
		}
	}
	delete[] tours;
	tours = newTours;
	count--;
	cout << "Tour deleted!\n";
}


