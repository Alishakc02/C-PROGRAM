#include<iostream>
using namespace std;
class circle{
    
    private:
    double radius;
    string color;
    public:
    void setRadius(double r)
    {
        radius=r;
    }
    
    
    void setColor(string c)
    {
        color=c;
    }
    double getRadius()
    {
        return radius;
    }
    double getArea()
    {
        return (3.14*radius*radius);
    }
    string getColor()
    {
        return color;
    }
};
    int main()
    {
        circle c1;
        c1.setRadius (4);
        c1.setColor ("red");
        cout<<"radius of circle:"<<c1.getRadius()<<endl;
         cout<<"area of circle:"<<c1.getArea()<<endl;
         cout<<"color is: "<<c1.getColor()<<endl;
         return 0;


    }


