// A C++ PROGRAM TO ADD REAL AND IMAGINARY NUMBER

#include <iostream>
using namespace std;
class Complex
{
    int real;
    int img;

public:
    Complex() : real(0), img(0) {}
    Complex(int r, int i) : real(r), img(i)
    {
    }
    void sum(const Complex &ob1, const Complex &ob2)
    {
        real = ob1.real + ob2.real;
        img = ob1.img + ob2.img;
    }
    void display()
    {
        cout << "The number is :" << real << "+" << img << "i" << endl;
    }
};
int main()
{
    Complex c1(2, 4), c2(3, 6), c3;
    c3.sum(c1, c2);
    c3.display();
    return 0;
}