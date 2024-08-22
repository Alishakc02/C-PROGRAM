// A C++ PROGRAM TO COMPARE THE VALUE OF i AND j
#include <iostream>
using namespace std;
class Decrement
{
private:
    int val;

public:
    Decrement(int i)
    {
        val = i;
    }
    int operator>(const Decrement &obj)
    {
        return val > obj.val;
    }
    void display()
    {
        cout << "value=" << val << endl;
    }
};
int main()
{
    Decrement i(15), j(6);
    if (i > j)
    {
        i.display();
    }
    else
    {
        j.display();
    }
    return 0;
}