// A C++ PROGRAM TO CONVERT THE TEMPERATURE OF FAHRENHEIT TO CELSIUS
#include <iostream>
using namespace std;
int main()
{
    float fah;
    float cel;
    cout << "Enter the temperature in fahrenheit" << endl;
    cin >> fah;
    cel = (fah - 32) / 1.8;
    cout << "The temperature in celsius is:" << cel << "C" << endl;
    return 0;
}