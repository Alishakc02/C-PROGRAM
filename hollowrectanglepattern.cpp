#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {

            if (i == 0 || i == 5)
            {
                cout << "*";
            }
            else if (j == 0 || j == 6)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}