// A c++ program to understand the concept of copy constructor
#include <iostream>
using namespace std;
class point
{
    int x;
    int y;

public:
    point();

    point(int, int);
    point(const point &);
    int getx();
    int gety();
};
int point::getx()
{
    return x;
}
int point::gety()
{
    return y;
}
point::point()
{
    x = -1;
    y = -1;
}
point::point(int a, int b) : x(a), y(b)
{
}
point::point(const point &obj)
{
    x = obj.x;
    y = obj.y;
}

int main()
{
    // int a=10;int &b=a;cout<<"a= "<<a<<"  b= "<<b<<endl;b=30;cout<<"a= "<<a<<" b= "<<b<<endl;

    point k(2, 3);
    point j = k;
    cout << "for object k"
         << "x= " << k.getx() << "y= " << k.gety() << endl;
    cout << "for object j"
         << "x= " << j.getx() << "y= " << j.gety() << endl;
    return 0;
}
