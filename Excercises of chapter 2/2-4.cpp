#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    //the program calculates the product of 3 integers
    int x{ 0 };
    int y{ 0 };
    int z{ 0 };
    int result{ 0 };

    cout << "Enter 3 integers :";
    cin >> x >> y >> z;

    result = x * y * z;

    cout << "the product is " << result << endl;

    return 0;
}
