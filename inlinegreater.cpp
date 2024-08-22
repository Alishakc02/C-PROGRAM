// A C++ PROGRAM TO FIND THE GREATEST NUMBER BETWEEN TWO USING INLINE FUNCTION
#include <iostream>
using namespace std;
inline int greatest(int a, int b)
{
    return (a - b);
}
int main()
{
    int c, d, u;
    cout << "Enter two numbers c and d" << endl;
    cin >> c >> d;
    u = greatest(c, d);

    if (greatest(c, d) > 0)
    {
        cout << "c  is greatest" << endl;
    }
    else if (greatest(c, d) < 0)
    {
        cout << "d is greatest" << endl;
    }
    else
    {
        cout << "Both are equal" << endl;
    }

    return 0;
}