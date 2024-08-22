#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;
    int sum;
    do
    {
        sum = sum + n;
        cout << "Enter a number:" << endl;
        cin >> n;
    } while (n >= 0);
    cout << "The sum of given number is:" << sum << endl;
    return 0;
}