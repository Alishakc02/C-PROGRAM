#include <iostream>
using namespace std;
class student
{
    string name;
    double marks[3];

public:
    student(string n)
    {
        int i;
        name = n;
        cout << "Enter marks obtained in 3 subjects " << endl;
        for (i = 0; i < 3; i++)
        {
            cin >> marks[i];
        }
    }
    double getTotal()
    {
        int i;
        double total = 0;
        for (i = 0; i < 3; i++)
        {
            total += marks[i];
        }
        return total;
    }
    student compare(student ob1, student ob2)
    {
        if (ob1.getTotal() > ob2.getTotal())
            return ob1;
        else
            return ob2;
    }
};
int main()
{
    student s1("a"), s2("b");
    cout << "Total marks: " << s1.getTotal() << endl;

    return 0;
}
