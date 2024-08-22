#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    float b = 3.4f;
    double c = 3.45;
    long double d = 5.67L;
    cout << "The size of a is " << sizeof(5) << endl;
    cout << "The size of b is " << sizeof(3.4) << endl;
    cout << "The size of c is " << sizeof(3.45) << endl;
    cout << "The size of d is " << sizeof(5.67) << endl;
    return 0;
}
