#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int x{ 0 }, y{ 0 };
    cout << "Enter 2 integers : ";
    cin >> x >> y;

    if (x > y) {
        cout << x << " is larger" << endl;
        return 0;
    }
    else if (x == y) { cout << "equal" << endl; return 0; }

    cout << y << " is larger" << endl;

    return 0;
}
