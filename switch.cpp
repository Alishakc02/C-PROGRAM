#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "1st period is Microprocessor" << endl;
        break;

    case 2:
        cout << "2nd period is Statistics" << endl;
        break;

    case 3:
        cout << "3rd period is mathematics" << endl;
        break;

    default:
        cout << "You have chosen wrong number" << endl;
        break;
        return 0;
    }
}