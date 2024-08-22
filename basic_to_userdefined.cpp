// A C++ PROGRAM TO CONVERT THE BASIC DATA TYPE TO USER DEFINED DATA TYPE
#include <iostream>
using namespace std;
class Distance
{
    int centimeter;
    float meter;

public:
    Distance()
    {
        centimeter = 0;
        meter = 0;
    }
    Distance(int cm) : centimeter(cm)
    {
        meter = float(centimeter) / 100;
    }
    void dispaly()
    {
        cout << centimeter << "cm.= " << meter << "m." << endl;
    }
};
int main()
{
    Distance d = 256;
    d.dispaly();
}