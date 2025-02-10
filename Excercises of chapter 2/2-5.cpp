#include <iostream>

//using declarations to make using the objects of c++ standard input output stream library easy
using std::cout;
using std::cin;
using std::endl;

int main()
{
    //the program calculates the product of 3 integers

    //declaring and intializing the variables
    int x{ 0 };
    int y{ 0 };
    int z{ 0 };
    int result{ 0 };

    //prompting the user to enter 3 integers
    cout << "Enter 3 integers :";

    //assigning values from the keyboard of the user to variables
    cin >> x >> y >> z;

    //computing and assigning the product of the three values the user entered to the variable result
    result = x * y * z;

    //displaying the product on the screen for the user
    cout << "the product is " << result << endl;

    //returning a value from function main that indicates that the program has terminated successfully
    return 0;
}
