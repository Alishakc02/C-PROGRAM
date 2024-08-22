#include<iostream>


using namespace std;

class time1
{
 private:
  int hrs;
  int mins;

  public:
  time1():hrs(0),mins(0){}
  time1(int h, int m):hrs(h),mins(m){}
  friend istream & operator >> (istream &tin, time1 &t);
  friend ostream & operator << (ostream &tout, time1 &t);
};

istream & operator >>(istream &tin, time1 &t){
 tin>>t.hrs;
 tin>>t.mins;
 return tin;
}

ostream & operator << (ostream &tout, time1 &t){
 tout<<t.hrs<<" : "<<t.mins<<endl;
 return tout;
}

int main()
{
 time1 t1;
 cout<<"Enter time t1 : ";cin>>t1;
 cout<<"Time t1 = "<<t1;
 time1 t2(11,23);
 cout<<"Time t2 is "<<t2;

 return(0);
}