/*
COMPLEX
INT REAL
INT IMG
COMPLEX(INT R,INT I)
SUM(C1,C2,C3)*/
// A C++ PROGRAM TO ADD TWO COMPLEX NUMBER
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
    }
    Complex(int r, int i) : real(r), img(i)
    {
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
    Complex c1(2, 3), c2, c3;

    c2 = Complex(2, 6);

    c3 = c1 + c2;
    c1.display();
    // cout << "+";
    c2.display();
    // cout << "=";
    c3.display();

    return 0;
}