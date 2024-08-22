// A C++ PROGRAM TO FIND THE GIVEN NUMBER IS ODD OR EVEN USING INLINE FUNCTION WITH CLASS AND OBJECT
#include <iostream>
using namespace std;
class natural
{
public:
    inline int mod(int a)
    {
        return (a % 2) ? 0 : 1;
    }
};
int main()
{
    natural n;
    if (n.mod(16))
    {
        cout << "The given number is even";
    }
    else
    {
        cout << "The given number is odd";
    }

    return 0;
}