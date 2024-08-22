// A C++ PROGRAM TO COMPARE THE AREA OF TWO RECTANGLES
#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle()
    {
        length = 0;
        breadth = 0;
    }
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    void getdata()
    {
        cout << "Enter the length of the 1st rectangle:" << endl;
        cin >> l;
        cout << "Enter the breadth of the 1st rectangle:" << endl;
        cin >> b;
        cout << "Enter the length of the 2nd rectangle:" << endl;
        cin >> l;
        cout << "Enter the breadth of the 2nd rectangle:" << endl;
        cin >> b;
    }
    void setcolor()
    {
    }
};
int main()
{
    rectangle r1, r2;

    return 0;
}