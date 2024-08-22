#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    bool flag = 0;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "It is not prime number " << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "It is prime number " << endl;
    }

    return 0;
}