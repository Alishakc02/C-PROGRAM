#include <iostream>
using namespace std;
void fib(int n)
{
    int t1 = 0, i;
    int t2 = 1;
    int nextdigit;
    for (i = 1; i <= n; i++)
    {
        cout << t1 << endl;
        nextdigit = t1 + t2;
        t1 = t2;
        t2 = nextdigit;
    }
    return;
}
int main()
{
    int n, i;
    cout << "Enter a number:" << endl;
    cin >> n;
    cout << "The fibonacci series of the given number is:" << endl;
    fib(n);
    return 0;
}