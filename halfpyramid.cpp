#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}