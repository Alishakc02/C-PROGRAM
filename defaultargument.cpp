// A C++ PROGRAM TO UNDERSTAND THE CONCEPT OF DEFAULT ARGUMENTS
#include <iostream>
using namespace std;

int sum(int a = 10, int b = 20, int c = 50)
{
    return a + b + c;
}

int main()
{
    cout << "The sum is:" << sum() << endl;
    cout << "The sum is:" << sum(30) << endl;
    cout << "The sum is:" << sum(10, 20) << endl;
    cout << "The sum is:" << sum(10, 20, 30) << endl;

    return 0;
}