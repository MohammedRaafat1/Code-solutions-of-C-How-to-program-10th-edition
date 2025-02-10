// 2-19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int x{ 0 }, y{ 0 }, z{ 0 };

    cout << "Input 3 different integers: ";

    cin >> x >> y >> z;

    cout << "sum is " << (x + y + z) << "\naverage is " << (x + y + z) / 3 << "\nproduct is " << x * y * z << endl;

    if (x < y && x < z) {
        cout << x << " is smallest\n";
    }
    else if (y < x && y < z) {
        cout << y << " is smallest\n";
    }
    else
        cout << z << " is smallest\n";

    if (x > y && x > z) {
        cout << x << " is largest\n";
    }
    else if (y > x && y > z) {
        cout << y << " is largest\n";
    }
    else
        cout << z << " is largest\n";

    return 0;
}