#include "Tour.h"
#include <iostream>
using namespace std;

int main()
{
    Tour t1("Summer Trip", "Italy, Rome", 100, 7, "All inclusive", 300.5);
    t1.showInfo();

    cout << "-------------------\n";

    Tour t2("Winter Tour", "Austria, Vienna", 150, 5, "Breakfast only", 200);
    t2.showInfo();

    return 0;


}
