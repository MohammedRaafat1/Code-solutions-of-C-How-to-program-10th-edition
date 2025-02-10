// 2-32 Maximal Heart Rate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int age{ 0 }, tanakaEquation{ 0 }, gellishEquation{ 0 }, nes_et_alEquation{ 0 }, min{ 0 }, max{ 0 };

    cout << "Enter your age to calculate your (MHR)Maximal Heart Rate :";
    cin >> age;

    tanakaEquation = 220 - age;
    gellishEquation = 208 - (0.7 * age);
    nes_et_alEquation = 211 - (0.64 * age);

    min = tanakaEquation; max = tanakaEquation;

    if (max < gellishEquation)max = gellishEquation;
    if (max < nes_et_alEquation)max = nes_et_alEquation;

    if (min > gellishEquation)min = gellishEquation;
    if (min > nes_et_alEquation)min = nes_et_alEquation;

    cout << "Your maximal heart rate is :\n" << "According to the study made in Tanaka 2001 is " << tanakaEquation;
    cout << "\nAccording to Gellish 2007 is " << gellishEquation << "\nAccording to Nes Et Tal in 2012 is " << nes_et_alEquation << endl;

    cout << "You should moderate your maximal heart rate to be between " << min << " and " << max << endl;


    
    return 0;
}

