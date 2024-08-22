// A c++ program to read 3 data and perform the operation x=a/(b-c)
#include <iostream>
using namespace std;
int main()
{
    float a, b, c, y;
    float x;
    cout << "Enter the value of a,b, and c:" << endl;
    cin >> a >> b >> c;
    y = b - c;
    if (y == 0)
    {
        cout << "Imaginary number" << endl;
    }
    else
    {
        x = a / y;
        cout << "The value of x is:" << x << endl;
    }

    return 0;
}