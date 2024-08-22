#include <iostream>
using namespace std;
int main()
{
    int i;

    for (i = 0; i <= 50; i++)
    {
        if (i % 2 == 0)
            continue;

        cout << "The odd numbers upto 50 are: " << i << endl;
    }

    return 0;
}
