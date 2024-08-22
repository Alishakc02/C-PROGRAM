// A c++ program to display student info in the order of their result
#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    double total_marks;
    double percent;

    public:
    
    student(string n, double y)
    {

    name=n;
    total_marks=y;
    }
     
    string getName()
    {
        return name;
    }
    double getMarks()
    {
        return total_marks;
    }
    double getPercent()
    {
        return total_marks/5;
    }
  
};
int main()
{
   

   
    student a("RAM",320);
    cout<<"Following are the ranking of student:"<<endl;
    cout<<"NAME: "<<a.getName()<<endl;
    
    
    cout<<"MARKS: "<<a.getMarks()<<endl;
    
    student b("SHYAM",345);
    cout<<"Following are the ranking of student:"<<endl;
    cout<<"NAME: "<<b.getName()<<endl;
    
    
    cout<<"MARKS: "<<b.getMarks()<<endl;
     
    student c("HARI",234);
    cout<<"Following are the ranking of student:"<<endl;
    cout<<"NAME: "<<c.getName()<<endl;
    
    
    cout<<"MARKS: "<<c.getMarks()<<endl;
     
    student d("GOPAL",237);
    cout<<"Following are the ranking of student:"<<endl;
    cout<<"NAME: "<<d.getName()<<endl;
    
    
    cout<<"MARKS: "<<d.getMarks()<<endl;
    
    

    


    return 0;
}