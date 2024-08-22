// A C++ program to understand the concept of static variable and function
#include<iostream>
using namespace std;
class student{

    public:
    string name;
    static string college_name;    //="Nagarjuna College";

};
 string student::college_name ="Nagarjuna College";
int main()
{
    student obj;
    obj.name="test";
    cout<<"name: "<<obj.name<<endl;
    cout<<"name: "<<obj.name <<"College Name "<< student::college_name<<endl;
    
    return 0;

}
