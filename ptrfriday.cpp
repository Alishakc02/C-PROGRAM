#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    int n, i;
    cout << "Enter the number of elements " << endl;
    cin >> n;
    ptr = new int[n];

    cout << "Enter the elements" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> *(ptr + i);
    }

    cout << "Displying: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << *(ptr + i) << endl;
    }

    return 0;
}