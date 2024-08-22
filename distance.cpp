#include <iostream>
using namespace std;
class Line
{
private:
    int Length;

public:
    Line(int L)
    {
        Length = L;
    }
    Line()
    {
        Length = 0;
    }
    Line operator+(const Line &obj);
    void display();
};
void Line::display()
{
    cout << Length << endl;
}
Line Line::operator+(const Line &obj)

{
    Line temp;
    temp.Length = Length + obj.Length;
    return temp;
}

int main()
{
    Line L1(4), L2(4), L3;
    L3 = L1 + L2;
    L3.display();
    return 0;
}