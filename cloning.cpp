// A C++ PROGRAM TO UNDERSTAND THE CONCEPT OF COPY CONS
#include <iostream>
using namespace std;
class Rectangle
{
    int length;
    int breadth;

public:
    Rectangle(int l, int b) : length(l), breadth(b)

    {
    }
    Rectangle(const Rectangle &obj)
    {
        length = obj.length;
        breadth = obj.breadth;
    }
    int getArea()
    {
        return (length * breadth);
    }
};
int main()
{
    Rectangle r1(10, 12);
    cout << "Area=" << r1.getArea() << endl;
    Rectangle r2 = r1;
    cout << "Area after clone=" << r2.getArea() << endl;
}