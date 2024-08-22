// A C++ PROGRAM TO ADD TWO COMPLEX NUMBERS USING OPERATOR OVERLOADING
#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;

public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    Complex operator+(const Complex &obj);
    void display();
};

Complex Complex::operator+(const Complex &obj)
{
    Complex temp;
    temp.real = real + obj.real;
    temp.img = img + obj.img;
    return temp;
}
void Complex::display()
{
    cout << "The result is:" << endl;
    cout << real << "+" << img << "i" << endl;
}

int main()
{
    Complex c1, c2, c3;
    c1 = Complex(4, 5);
    c2 = Complex(3, 5);
    c3 = c1 + c2;
    c3.display();
    return 0;
}