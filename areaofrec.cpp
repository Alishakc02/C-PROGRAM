// A C++ PROGRAM TO FIND THE AREA OF RECTANGLE USING LENGTH AND BREADTH AND CALL FUNCTION
#include <iostream>
using namespace std;
void Area(int length, int breadth)
{
    int area;

    area = length * breadth;
    cout << area;
}
int main()
{
    int l, b;
    cout << "Enter the length of rectangle:" << endl;
    cin >> l;
    cout << "Enter the breadth of rectangle:" << endl;
    cin >> b;
    cout << "The area of a rectangle is:" << endl;
    Area(l, b);
    return 0;
}