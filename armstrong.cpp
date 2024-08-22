#include <iostream>
using namespace std;
int main()
{
    int n, digit, sum = 0, original;
    cout << "Enter a number:" << endl;
    cin >> n;
    original = n;
    while (n > 0)
    {
        digit = n % 10;
        sum = sum + digit * digit * digit;
        n = n / 10;
    }
    if (sum == original)
    {
        cout << "It is a armstrong number" << endl;
    }
    else
    {
        cout << "It is not  a armstrong number" << endl;
    }
    return 0;
}