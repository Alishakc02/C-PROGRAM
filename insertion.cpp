#include <iostream>
using namespace std;
class Complex
{
    private:
        int real;
        int img;
    public:
        Complex (int r = 0, int i = 0)
        {
            real = r;
            img = i;
        }
        friend ostream& operator << (ostream& o, Complex& c);
};
ostream& operator << (ostream & o, Complex & c)
{
    o<<c.real << " +i" << c.img;
    return o;
}
int main()
{
  Complex C1 (5, 2);
  cout << C1;
}