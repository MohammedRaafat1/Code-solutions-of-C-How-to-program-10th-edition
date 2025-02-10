// 2-24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int x{ 0 }, y{ 0 };

    cin >> x >> y;

    if (x % 2 == 0) {
        cout << "even" << endl;
    }
    else
        cout << "odd" << endl;
    if (y % 2 == 0) {
        cout << "even" << endl;
    }
    else
        cout << "odd" << endl;
    if ((x + y) % 2 == 0) {
        cout << "even" << endl;
    }
    else
        cout << "odd" << endl;

    return 0;
}

