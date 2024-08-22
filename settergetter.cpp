#include<iostream>
using namespace std;
class Student
{
private:
int marks;

public:
void setmarks(int m)
{
    marks=m;
}
int getmarks()
{
    return marks;
}
};
int main()
{
    Student s1;
    s1.setmarks(77);
    cout<<"the mark of stdent is "<<s1.getmarks()<<endl;
    return 0;

}