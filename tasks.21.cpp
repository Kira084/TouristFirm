#include "Tour.h"
#include "TouristFirm.h"
#include <iostream>
using namespace std;

int main()
{
 
        TouristFirm firm;
        firm.createTours();

        int choice;
        do {
            cout << "\n1. Show all\n";
            cout << "2. Add tour\n";
            cout << "3. Delete tour\n";
            cout << "0. Exit\n";
            cout << "Choice: "; cin >> choice;

            switch (choice) {
            case 1: firm.showAll(); break;
            case 2: firm.addTour(); break;
            case 3: firm.deleteTour(); break;
            case 4: firm.findTour(); break;
            case 5: firm.sortByDirection(); break;
            case 6: firm.sortByFare(); break;
            }
        } while (choice != 0);

        return 0;
    }

