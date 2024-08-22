// A C++ PROGRAM TO UNDERSTAND THE CONCEPT OF DYNAMIC MEMORY ALLOCATION
#include <iostream>
using namespace std;

int main()
{
    int size, i;
    int sum = 0;
    cout << "Enter the size of array" << endl;
    cin >> size;
    int *p = new int[size];
    cout << "Enter the elements" << size << endl;
    for (i = 0; i < size; i++)
    {
        cin >> *(p + i);
        sum = sum + *(p + i);
    }
    cout << "The elements are" << endl;

    for (i = 0; i < size; i++)
    {
        cout << *(p + i) << endl;
    }
    cout << "The sum of the elements is:" << sum << endl;

    return 0;
}