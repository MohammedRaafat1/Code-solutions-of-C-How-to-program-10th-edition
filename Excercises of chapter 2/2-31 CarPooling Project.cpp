// 2-31 Car Pooling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int milesPerDay{ 0 }, gasolineCostPerGallon{ 0 }, avgMilesPerGallon{ 0 }, parkingFeesPerDay{ 0 }, tollsPerDay{ 0 }, cost{ 0 };

    cout << "Input your total miles per day, gasoline cost per gallon, average miles per gallon, parkingFeesPerDay, tollsPerDay :";
    cin >> milesPerDay >> gasolineCostPerGallon >> avgMilesPerGallon >> parkingFeesPerDay >> tollsPerDay;

    cost = (milesPerDay / avgMilesPerGallon) * gasolineCostPerGallon + parkingFeesPerDay + tollsPerDay;

    cout << "Your daily cost of driving your car is " << cost << "$" << endl;


    return 0;
}
