//  A c+= program to count number of objects
#include<iostream>
using namespace std;
class rectangle{


    int length;
    int breadth;
    public:
    static int counter;
    rectangle(int l,int b): length(l), breadth(b)
    {
        counter ++;


    }
    static int getCount();
   
};
int rectangle:: counter=0;
int rectangle::getCount()
{
    return counter;
}
int main()
{

rectangle r1(4,5) ,r2(3,4),r3(4,7);
cout<<"Number of object created: "<<rectangle::getCount()<<endl;
return 0;


}
