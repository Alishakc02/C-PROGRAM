#include <iostream>
using namespace std;
int main()
{
    char dest[30];
    char sour[30];
    strcpy(dest, "I AM");
    strcpy(sour, "  ALISHA KHATRI");
    strcat(dest, sour);
    cout << "The concatenated result is:" << dest << endl;
}