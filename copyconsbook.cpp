// A C++ PROGRAM TO UNDERSTAND THE CONCEPT OF COPY CONSTRUCTOR
#include <iostream>
using namespace std;
class Copy
{
private:
    int id;

public:
    Copy();
    Copy(int a)
    {
        id = a;
    }
    Copy(Copy &x)
    {
        id = x.id;
    }
    int display()
    {
        return id;
    }
};

int main()
{

    Copy b1(2);
    Copy b2 = b1;
    Copy b3(b2);
    cout << "value of b1 is"
         << " " << b1.display() << endl;
    cout << "value of b2 is"
         << " " << b2.display() << endl;
    cout << "value of b3 is"
         << " " << b3.display() << endl;
}
