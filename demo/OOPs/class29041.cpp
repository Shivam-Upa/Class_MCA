#include <iostream>
using namespace std;
class Marks
{
    // int l,b,a;
    int p1, p2, p3, p4, total;
    float percentage;

public:
    Marks()
    {
        p1 = 50;
        p2 = 50;
        p3 = 50;
        p4 = 50;
        cout << "c invoked" << endl;
    }
    


























    
    void percen()
    {
        total = p1 + p2 + p3 + p4;
        percentage = (total * 100)/400;
        cout << "percentage of student is " << percentage << endl;
    }
    ~Marks()
    {
        cout << endl;
        cout << "d invoked" << endl;
    }
};
int main()
{
    Marks b1, b2;
    b1.percen();
    b2.percen();
}