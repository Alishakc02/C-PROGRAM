#include <iostream>
using namespace std;
inline int sum(int a)
{
    return (a + 10);
}
int main()
{
    int b;
    cout << "Enter the value of b:" << endl;
    cin >> b;
    cout << "The value of b after sum is:" << sum(b) << endl;
    return 0;
}