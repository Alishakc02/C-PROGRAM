#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    double b;
    b = a;
    cout << "Integer value=" << a << endl;
    cout << "Double value=" << b << endl;
    b = 10.99;
    a = b;
    cout << "Integer value=" << a << endl;
    cout << "Double value=" << b << endl;
    return 0;
}