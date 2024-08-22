#include <iostream>
using namespace std;
int main()
{
    int n;
    int reverse = 0, digit;
    cout << "Enter a number:";
    cin >> n;
    while (n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    cout << "The reverse of the given number is:" << reverse << endl;
    return 0;
}