// C++ program to understand the concept of binary operator overloading....
#include <iostream>
using namespace std;
class Complex
{
    int real;
    int img;

public:
    
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    void operator=(const Complex &obj);
    void display();
};
void Complex::display()
{
    cout << "Result is: " << endl;
    cout << real << "+i" << img <<endl;
}
void Complex::operator=(const Complex &obj)
{
  
    real =  obj.real;
    img =  obj.img;

   
}
int main()
{
    Complex c1(9, 8), c2(3, 4) ;
     c1.display();
      c2.display();
    c2 = c1;
    c1.display();
     c2.display();
    return 0;
}