// WRITE A C++ PROGRAM TO CHECK WHETHER THE GIVEN NO. IS EVEN OR ODD USING INLINE FUNCTION
// #include <iostream>
// using namespace std;
// inline int product(int a, int b)
// {
//     return (a * b);
// }
// int main()
// {
//     int c, d;
//     cout << "Enter the value of c:" << endl;
//     cin >> c;
//     cout << "Enter the value of d:" << endl;
//     cin >> d;
//     cout << "The value of  after product is:" << product(c, d) << endl;
//     return 0;
// }
#include <iostream>
using namespace std;
inline int mod(int a)
{
    return (a % 2);
}
int main()
{
    int c;
    cout << "Enter a number:" << endl;
    cin >> c;
    cout << "The value of c after modulus is:" << mod(c) << endl;
    if (mod(c))
    {
        cout << "The given number is odd";
    }
    else
    {
        cout << "The given number is even" << endl;
    }
    return 0;
}