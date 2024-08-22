#include <iostream>
using namespace std;
class circle
{
private:
    double radius;

public:
    circle()
    {
        cout << "Constructor get called" << endl;
        radius = 7;
    }
    ~circle()
    {
        cout << "destructor get called" << endl;
    }
    circle(double r)
    {

        radius = r;
    }
    double getRadius()
    {
        return radius;
    }
    double getArea()
    {
        return (3.14 * radius * radius);
    }
};
int main()
{
    circle c;
    cout << "AREA OF 1ST CIRCLE IS" << c.getArea() << endl;
    circle d(14);
    cout << "AREA OF 2nd CIRCLE IS" << d.getArea() << endl;
    if (c.getArea() > d.getArea())
    {
        cout << "1st circle has greater area" << endl;
    }
    else
    {
        cout << "2nd circle has greater area" << endl;
    }

    return 0;
}