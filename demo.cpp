// A C++ PROGRAM TO UNDERSTAND THE CONCEPT OF CLASS AND OBJECTS
#include <iostream>
using namespace std;
class rectangle
{
public:
    int length;
    int breadth;
};
int main()
{
    rectangle obj1, obj2;
    obj1.length = 10;
    obj1.breadth = 20;
    obj2.length = 30;
    obj2.breadth = 40;
    cout << "the length of rectangle is:" << obj1.length() << obj2.length() << endl;
}