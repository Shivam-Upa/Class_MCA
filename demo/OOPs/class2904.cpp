#include <iostream>
using namespace std;
class Box{
    int l,b,a;
    public:
        Box(){
            l=100;
            b=30;
            a=0;
            cout<<"c invoked"<<endl;
        }
        void area(){
            a=(l*b);
            cout<<"area "<<a<<endl;
        }
        ~Box(){
            cout<<endl;
            cout<<"d invoked"<<endl;
        }
};
int main()
{
    Box b1, b2;
    b1.area();
    b2.area();
}