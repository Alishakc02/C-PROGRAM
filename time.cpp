/* A C++ PROGRAM TO UNDERSTAND THE CONCEPT OF CONVERTING SECONDS AND MINUTES INTO HOUR*/
#include <iostream>
using namespace std;
class time
{
private:
    int h;
    int m;
    int s;

public:
    time()
    {
        h = 0;
        m = 0;
        s = 0;
    }

    void getdata()
    {
        cout << "Enter hours,minutes,and seconds" << endl;
        cin >> h >> m >> s;

        if (s >= 60)
        {
            s = s - 60;
            m++;
        }
        if (m >= 60)
        {
            m = m - 60;
            h++;
        }
    }
    void display()
    {
        cout << "Time=" << h << "hours" << m << "minutes" << s << "seconds" << endl;
    }
    time operator+(time t2)
    {
        time t3;
        t3.s = s + t2.s;
        t3.m = m + t2.m;
        t3.h = h + t2.h;
        if (t3.s >= 60)
        {
            t3.s = t3.s - 60;
            t3.m++;
        }
        if (t3.m >= 60)
        {
            t3.m = t3.m - 60;
            t3.h++;
        }
        return t3;
    }
};
int main()
{

    time t1, t2, t3;
    t1.getdata();
    t2.getdata();
    t3 = t1 + t2;
    t1.display();
    t2.display();
    t3.display();

    return 0;
}