// 2-30 MBI Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{

    double weight, height;

    cout << "Enter your weight in KGM and height in CM to calculate your body mass index: ";
    cin >> weight >> height;
    height = height / 100;

    cout << "Your (BMI) Body mass index is " << weight / (height * height) << endl;
    cout << "BMI VALUES\n" << "Underweight: less than 18.5\n" << " Normal: between 18.5 and 24.9\n" << "Overweight:between 25 and 29.9\n" << " Obese: 30 or greater" << endl;


    return 0;
}
