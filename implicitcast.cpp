
// A C++  PROGRAM FOR IMPLICIT CONVERSION
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    double b;
    b = a;
    cout << "a=" << a << "b=" << b << endl;
    b = 2.75;
    a = b;
    cout << "a=" << a << "b=" << b << endl;

    return 0;
}
