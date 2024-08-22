// A C++ PROGRAM TO UNDERSTAND THE CONCEPT OF OPERATOR USING SWITCH CASE
#include <iostream>
using namespace std;
int main()
{
    int a, b, n, result = 0;
    cout << "Enter your choice:" << endl;
    cin >> n;
    cout << "Enter the values of a and b:" << endl;
    cin >> a >> b;
    switch (n)
    {
    case '1':
        result = a + b;

        break;
    case '2':
        result = a - b;

        break;

    case '3':
        result = a * b;

        break;

    case '4':
        result = a / b;

        break;
        // default:
        // cout << "you have entered wrong number" << endl;
        // break;
    }
    cout << result << endl;
    return 0;
}