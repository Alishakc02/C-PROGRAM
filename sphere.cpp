// A C++ PROGRAM TO FIND THE SUFACE AREA AND VOLUME
#include <iostream>
using namespace std;
int main()
{
    float r, area, volume;
    float PI = 3.14;
    cout << "Enter the radius of the sphere:";
    cin >> r;

    area = PI * 4 * r * r;
    volume = (4 / 3) * PI * r * r * r;
    cout << "The area of the sphere is:" << area << endl;
    cout << "The volume of the sphere is:" << volume << endl;
    return 0;
}