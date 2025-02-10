// 2-19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int r{ 0 };

    cout << "Enter the circle's radius : ";
    cin >> r;

    cout << "radius is " << 2 * r << endl;
    cout << "circumference is " << 2 * 3.14159 * r << endl;
    cout << "area is " << 3.14159 * r * r << endl;
}