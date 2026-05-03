#pragma once

class Tour 
{
	char* tourName;
	char* direction;
	int dailyPrice;
	int days;
	char* nutrition;
	double fare;

public:

	Tour();

	Tour(const char* tourName,
		const char* direction,
		int dailyPrice,
		int days,
		const char* nutrition,
		double fare);
		
	~Tour();


//=================================================
	const char* getTourName() const;
	const char* getDirection() const;
	int getDailyPrice() const;
	int getDays() const;
	const char* getNutrition() const;
	double getFare() const;
//=================================================
	void setTourName(const char* tourName);
	void setDirection(const char* direction);
	void setDailyPrice(int dailyPrice);
	void setDays(int days);
	void setNutrition(const char* nutrition);
	void setFare(double fare);


//=================================================
	void showInfo() const;
	/*void addTour();
	void deleteTour();
	void findTour();
	void sortTour();*/

	Tour(const Tour& other);
	Tour& operator=(const Tour& other);


};

