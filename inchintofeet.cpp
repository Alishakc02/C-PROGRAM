#include <iostream>
using namespace std;
class feets
{
private:
    int feet;
    int inch;

public:
    feets()
    {
        feet = 0;
        inch = 0;
    }
    feets(int f, int i)
    {
        feet = f;
        inch = i;
        if (i > 11)
        {
            i = i - 12;
            f++;
        }
    }
    feets operator+(feets f2)
    {
        feets f3;
        f3.feet = feet + f2.feet;
        f3.inch = inch + f3.inch;
        if (f3.inch >= 12)
        {
            f3.inch = f3.inch - 12;
            f3.feet++;
        }
        return f3;
    }
    void display()
    {
        cout << "Length= " << feet << "feets" << inch << "inches" << endl;
    }
};
int main()
{
    feets f1(5, 6);
    feets f2(7, 1);
    feets f3;
    f3 = f1 + f2;
    f1.display();
    f2.display();
    f3.display();

    return 0;
}