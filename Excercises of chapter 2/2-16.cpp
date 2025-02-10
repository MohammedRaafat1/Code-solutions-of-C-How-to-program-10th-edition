#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int x{ 0 }, y{ 0 };

    cout << "Enter 2 integers : ";
    cin >> x >> y;

    cout << "x+y = " << x + y << "\nx*y =  " << x*y << "\nx-y = " << x-y << "\nx/y = " << x/y << endl;

    return 0;
}
