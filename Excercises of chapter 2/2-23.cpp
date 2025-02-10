// 2-23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int n1{ 0 }, n2{ 0 }, n3{ 0 }, n4{ 0 }, n5{ 0 }, max, min;

    cout << "enter 5 different integers : ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    max = n1; min = n1;

    if (max < n2) max = n2;
    if (max < n3) max = n3;
    if (max < n4) max = n4;
    if (max < n5) max = n5;

    cout << max << " is the largest" << endl;

    if (min > n2) min = n2;
    if (min > n3) min = n3;
    if (min > n4) min = n4;
    if (min > n5) min = n5;

    cout << min << " is the smallest" << endl;


}
