#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char source[] = "I AM A GIRL";
    char copy[20];
    strcpy(copy, source);
    cout << "The copied string is:" << copy << endl;
    return 0;
}