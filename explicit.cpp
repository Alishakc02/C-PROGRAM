#include <iostream>
using namespace std;
int main()
{
    int a = 2, b = 3;
    double c;
    c = a / b;
    cout << "a= " << a << " b=" << b << " c=" << c << endl;
    // c-style typecast
    c = (double)a / b;
    // function style typecast
    c = double(a) / b;
    // c++ style
    cout << "a= " << a << " b=" << b << " c=" << c << endl;
    c = static_cast<double>(a) / b;
    cout << "a= " << a << " b=" << b << " c=" << c << endl;
    return 0;
}