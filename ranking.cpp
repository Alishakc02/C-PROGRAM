#include<iostream>
using namespace std;
class student{
    private:
    string name;
    double total_marks;
    public:
    student()
    {
       int i=0;
       for(i=0;i<5;i++)
       {

     
        double sub_1,sub_2,sub_3,sub_4,sub_5;
       cout << "Enter the marks of five subjects::\n";
    cin >> sub_1 >> sub_2 >> sub_3 >> sub_4 >> sub_5;

    
    total_marks = sub_1 + sub_2 + sub_3 + sub_4 + sub_5;
   
      } 
   
       
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
student s;
cout<<"NAME: "<<s.getName()<<endl;
    
    
    cout<<"MARKS: "<<s.getMarks()<<endl;
    cout<<"percentage: "<<s.getPercent()<<endl;
    student t();
    cout<<"NAME: "<<s.getName()<<endl;
    
    
    cout<<"MARKS: "<<s.getMarks()<<endl;
    cout<<"percentage: "<<s.getPercent()<<endl;
    student u();
    cout<<"NAME: "<<s.getName()<<endl;
    
    
    cout<<"MARKS: "<<s.getMarks()<<endl;
    cout<<"percentage: "<<s.getPercent()<<endl;
    student v();
    cout<<"NAME: "<<s.getName()<<endl;
    
    
    cout<<"MARKS: "<<s.getMarks()<<endl;
    cout<<"percentage: "<<s.getPercent()<<endl;
    student w();
    cout<<"NAME: "<<s.getName()<<endl;
    
    
    cout<<"MARKS: "<<s.getMarks()<<endl;
    cout<<"percentage: "<<s.getPercent()<<endl;












    return 0;
}