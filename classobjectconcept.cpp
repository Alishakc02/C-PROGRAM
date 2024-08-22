#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int age;

public:
    void getdata();
    void putdata();
};
void student::getdata()
{
    cout << "Enter the name of student" << name << endl;
    cin >> name;
}
void student::putdata()
{
    cout << "Enter the age of student" << age << endl;
    cin >> age;
}
int main()
{
    student s1;
    s1.getdata();
    s1.putdata();
    return 0;
}
