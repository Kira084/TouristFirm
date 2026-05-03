#pragma once
#include "Tour.h"

class TouristFirm
{
	Tour* tours;
	int count;
	

public: 
	TouristFirm();
	~TouristFirm();

	void createTours();
	void showAll();
	void addTour();
	void deleteTour();
};

