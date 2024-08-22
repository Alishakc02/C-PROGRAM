// C++ program to understand the concept of binary operator overloading....
#include <iostream>
using namespace std;
class Complex
{
    int real;
    int img;

public:
    Complex()
    {
        real = -1;
        img = -1;
    }
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    Complex operator+(const Complex &obj);
    void display();
};
void Complex::display()
{
    cout << "Result is: " << endl;
    cout << real << "+" << img << "i" << endl;
}
Complex Complex::operator+(const Complex &obj)
{
    Complex temp;
    temp.real = real + obj.real;
    temp.img = img + obj.img;
    return temp;
}
int main()
{
    Complex c1(2, 3), c2(3, 4), c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}