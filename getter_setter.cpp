// A C++ PROGRAM TO UNDERSTAND THE CONCEPT OF DATA ABSTRACTION
#include <iostream>
using namespace std;
class student
{
private:
    string Name;
    int Age;
    double total_marks;

public:
    void setName(string n)
    {
        Name = n;
    }
    void setAge(int a)
    {
        Age = a;
    }
    void settotal_marks(double m)
    {

        total_marks = m;
    }
    string getName()
    {
        return Name;
    }
    int getAge()
    {
        return Age;
    }
    double gettotal_marks()
    {
        return total_marks;
    }
    double getpercentage()
    {
        return ((total_marks) / 5);
    }
};

int main()
{

    student s1;
    double percentage;

    s1.setName("ALISHA");
    s1.setAge(28);
    s1.settotal_marks(400);
    cout << "following are the details:" << endl;
    cout << "name:" << s1.getName() << endl;
    cout << "age:" << s1.getAge() << endl;
    cout << "marks obtained:" << s1.gettotal_marks() << endl;

    cout << "Percentage is:" << s1.getpercentage() << endl;
    return 0;
}
