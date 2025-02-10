// 2-27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int n{ 0 };

	cin >> n;

	cout << n / 1000;
	n = n % 1000;

	cout << " " << n / 100;

	n = n % 100;

	cout << " " << n / 10;

	n = n % 10;

	cout << " " << n << endl;

	return 0;
}

