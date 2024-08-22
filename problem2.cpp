#include <iostream>
using namespace std;
int main()
{
    cout << "Electricity Board Charges" << endl;
    char name[40];
    cout << "Enter the user name:" << endl;
    cin >> name;
    float unit, cost = 0, totalcost = 0;
    cout << "Enter the Conumption Unit by consumer " << endl;
    cin >> unit;
    if (unit <= 100)
    {
        cost += 0.4 * unit;
    }
    else if (unit >= 300)
    {
        cost += 0.6 * unit;
    }
    else
    {
        cost += 0.5 * unit;
    }
    cout << "The cost of electricity bill is:" << cost << endl;
    if (cost > 250)
    {
        totalcost = cost + 0.15 * cost + 500;
    }
    else
    {
        totalcost = cost + 500;
    }
    cout << "Total electricity bill cost after addition of minimum charge is:" << endl;

    return 0;
}