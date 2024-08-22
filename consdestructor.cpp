// A C++ PROGRAM TO DEMONSTRATE THE CONCEPT OF CONSTRUCTOR AND DESTRUCTOR
#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int roll;

public:
    Student()
    {
        cout << "Constructor get called." << endl;
        roll = 9;
        name = "ALISHA";
    }
    ~Student()
    {
        cout << "Destructor got called" << endl;
    }
    string getname()
    {
        return name;
    }
    int getroll()
    {
        return roll;
    }
};
int main()
{
    Student s;
    cout << "Name of the student is"
         << " " << s.getname() << endl;
    cout << "Roll no of the student is"
         << " " << s.getroll() << endl;

    return 0;
}