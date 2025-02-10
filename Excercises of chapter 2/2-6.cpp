#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int c{ 0 };
   //first statement
   // if ( c < 7
   //cout << "c is less than 7\n";

   //the right code after closing the parentheses of the if statement
    if (c < 7)
        cout << "c is less than 7\n";

    /*if ( c =! 7 )
   cout << "c is equal to or greater than 7\n";*/

    //using an equality operator while the line printed indicates the need to use a relational operator

    if (c >= 7) {
        cout << " c is equal to or greater than 7\n";
    }

        

    return 0;
}
