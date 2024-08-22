/*
length=10cm
length=7cm
l1=10
l2=10
l1=10-3

 */
#include <iostream>
using namespace std;
class Line
{
private:
    int length;

public:
    Line()
    {
        length = 0;
    }
    Line(int l)
    {
        length = l;
    }
    Line operator-(const Line &obj);
    void display();
};
Line Line::operator-(const Line &obj)
{
    Line temp;
    temp.length = length - 3;
    return temp;
}

void Line::display()
{
    cout << "The length after subtraction 3 cm is:" << endl;
    cout << length << endl;
}
int main()
{
    Line l1(10), l2;
    l2 = l1 - 3;
    l2.display();
    return 0;
}