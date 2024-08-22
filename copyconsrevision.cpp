// A C++ PROGRAM TO UNDERSTAND THE CONCEPT OF CONSTRUCTOR
#include <iostream>
using namespace std;
class Box
{
    int length; // instance variable
    int breadth;
    int height;
    string fillings;

public:
    // void setDimension(int l, int b, int h, string f)
    // {
    //     length = l;
    //     breadth = b;
    //     height = h;
    //     fillings = f;
    // }
    // Box()
    // {
    //     cout << "costructor got called automatically when object is created" << endl;
    // }
    Box(int l, int b, int h, string f) // local variables
    {
        length = l;
        breadth = b;
        height = h;
        fillings = f;
    }
    void display();
    int getVolume();
};
int Box::getVolume()
{
    return (length * breadth * height);
}
void Box::display()
{
    cout << "followimg are the details :" << endl;
    cout << "length=" << length << endl;
    cout << "breadth=" << breadth << endl;
    cout << "height=" << height << endl;
    cout << "filling is"
         << " " << fillings << endl;
}
int main()

{
    Box b1(10, 4, 5, "chocolate"), b2(2, 4, 5, "sand"), b3(2, 5, 6, "sugar");
    // b1.setDimension(10, 20, 30, "chocolate");
    b1.display();
    b2.display();
    b3.display();
    if ((b1.getVolume() > b2.getVolume()) && (b1.getVolume() > b2.getVolume()))
    {
        b1.display();
    }
    else if ((b2.getVolume() > b1.getVolume()) && (b2.getVolume() > b3.getVolume()))
    {
        b2.display();
    }
    else
    {
        b3.display();
    }

    return 0;
}