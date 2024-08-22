#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "enter the number" << endl;
    cin >> n;
    int sum = 0;
    for (i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "the sum of given numbers is  " << sum << endl;
    return 0;
}