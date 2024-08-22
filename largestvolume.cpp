#include <iostream>
using namespace std;
class Box
{
private:
    int length;
    int breadth;
    int height;
    string fillings;

public:
    void setLength(int l)
    {
        length = l;
    }
    void setBreadth(int b)
    {
        breadth = b;
    }
    void setHeight(int h)
    {
        height = h;
    }
    void setFillings(string f)
    {
        fillings = f;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int getHeight()
    {
        return height;
    }
    string getFillings()
    {
        return fillings;
    }
    int getvolume()
    {
        return (length * breadth * height);
    }
};
int main()
{
    Box b1, b2, b3;
    b1.setLength(10);
    b1.setBreadth(20);
    b1.setFillings("Sand");
    b1.setHeight(15);
    b2.setLength(12);
    b2.setBreadth(20);
    b2.setFillings("Sugar");
    b2.setHeight(15);
    b3.setLength(14);
    b3.setBreadth(20);
    b3.setFillings("Chocolate");
    b3.setHeight(50);
    cout << "The volume of 1st box is:" << b1.getvolume() << endl;
    cout << "The filling of 1st box is:" << b1.getFillings() << endl;
    cout << "The volume of 2nd box is:" << b2.getvolume() << endl;
    cout << "The filling of 2nd box is:" << b2.getFillings() << endl;
    cout << "The volume of 3rd box is:" << b3.getvolume() << endl;
    cout << "The filling of 3rd box is:" << b3.getFillings() << endl;
    if (b1.getvolume() > b2.getvolume())
    {
        cout << "1st box has greatest volume" << endl;
    }
    else if (b2.getvolume() > b3.getvolume())
    {
        cout << "2nd box has greatest volume" << endl;
    }
    else
    {
        cout << "3rd box has greatest volume " << endl;
    }

    return 0;
}