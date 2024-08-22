#include <iostream>
using namespace std;
class Two
{
private:
    int a;

public:
    Two();
    Two(int x)
    {
        a = x;
    }
    Two(Two &m)
    {
        a = m.a;
    }
    int display()
    {
        return a;
    }
};
int main()
{
    Two t1(34);
    Two t2(t1);
    Two t3 = t2;
    cout << "The value of t1 is"
         << " " << t1.display() << endl;
    cout << "The value of t2 is"
         << " " << t2.display() << endl;
    cout << "The value of t3 is"
         << " " << t3.display() << endl;
}