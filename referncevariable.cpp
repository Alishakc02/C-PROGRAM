// A C++ PROGRAM TO DEMONSTARTE THE CONCEPT OF REFERENCE VARIABLE
#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a, b;
    cout << "Enter two variables: " << endl;
    cin >> a >> b;
    cout << "Value of a and b" << endl;
    swap(a, b);
    cout << "Value of a and b after swap is:" << endl;

    return 0;
}