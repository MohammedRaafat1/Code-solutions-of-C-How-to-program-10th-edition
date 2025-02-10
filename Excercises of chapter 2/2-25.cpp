// 2-25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int x{ 0 }, y{ 0 }, z{ 0 };

    cin >> x >> y >> z;

    if (x % y == 0 && x % z == 0) {
        cout << "the seond and the third numbers are factors of the first number" << endl;
    }
    else
        cout << "not factors" << endl;

    return 0;

}