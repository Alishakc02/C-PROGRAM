#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int age;
    double marks;
    public:
    
    student()
    {
        cout<< "construcor get called"<<endl;
        name="test";
        age=10;
        marks=100;

    }
     student(string n, int a, double m)
    {
        cout<<"parameterized constructor get called"<<endl;
        name=n;
        age=a;
        marks=m;

    }
   
  string getName(){
        return name;
    }
     int getAge(){
        return age;
    }
    double getMarks(){
        return marks;
    }


};
int main()
{
    student s;
    cout<< "following are the details:"<<endl;
    cout<<"NAME: "<<s.getName()<<endl;
    cout<<"AGE: "<<s.getAge()<<endl;
    
    cout<<"MARKS: "<<s.getMarks()<<endl;
     
     
    student q("test 2",45,345);
    cout<< "following are the details:"<<endl;
    cout<<"NAME: "<<q.getName()<<endl;
    cout<<"AGE: "<<q.getAge()<<endl;
    
    cout<<"MARKS: "<<q.getMarks()<<endl;
    
    









    return 0;




}