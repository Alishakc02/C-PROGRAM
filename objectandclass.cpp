// A c++ program to understand the concept of class and objects

#include <iostream>
using namespace std;
class rectangle
{
    public:
    double length;
    double breadth;
    double getlength()
    {
        return length;

    }
    double getbreadth()
    {
        return breadth;
    }
    
};


int main()
{
  
    rectangle r1; //r1 is an object of type rectangle
    r1.length=20;
    r1.breadth=5;
     cout<<"length= "<<r1.length<<" breadth = "<<r1.breadth<<endl;
     cout<<"length= "<<r1.getlength()<<" breadth = "<<r1.getbreadth()<<endl;
     
    rectangle r2;
    r2.length=25;
    r2.breadth=15;
     cout<<"length= "<<r2.length<<" breadth = "<<r2.breadth<<endl;
     cout<<"length= "<<r2.getlength()<<"breadth = "<<r2.getbreadth()<<endl;

    
    
    return 0;
}
