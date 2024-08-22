// A C++ PROGRAM TO UNDERSTAND THE CONCEPT OF FUNCTION OVERLOADING
#include <iostream>
using namespace std;
int sum(int a, int b, int c)
{
    return a + b + c;
}
int sum(int a, int b)
{
    return a + b;
}
int sum(int a)
{
    return a + 20;
}

int main()
{
    cout << "The sum of the given number is:" << sum(10, 40, 50) << endl;
    cout << "The sum of the given number is:" << sum(10, 40) << endl;
    cout << "The sum of the given number is:" << sum(10) << endl;

    return 0;
}