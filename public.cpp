#include<iostream>
using namespace std;
class student{
    public:
    int math;
    double physics;
    void out(){
        cout<<"the marks in math is "<<math<<endl;
         cout<<"the marks in physics is "<<physics<<endl;

    }

};
int  main()
{
    student s;
    s.math=98;
    s.physics=99.89;
    s.out();
    return 0;
}