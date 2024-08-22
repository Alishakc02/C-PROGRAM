#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    double marks;

public:
    Student(string n)
    {
        name = n;
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter the name of the students:" << endl;
            cin >> name;
        }
    }
    Student(double m)
    {
        marks = m;
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter the marks  of the students:" << endl;
            cin >> marks;
        }
    }
    double getTotal()
    {
        int i;
        double total = 0;
        for (i = 0; i < 3; i++)
        {
            total += marks;
        }
    }
    Student compare(Student ob1, Student ob2)
    {
        if (ob1.getTotal() > ob2.getTotal())
        {
            cout << "The highest marks obtained is:" << ob1.getTotal() << endl;
        }
        else
        {
            cout << "The highest marks obtained is:" << ob2.getTotal() << endl;
        }
    }
};
int main()
{
    Student s1("a"), s2("b");
    cout << "Total marks obtained by the student is:" << s1.getTotal() << endl;
}