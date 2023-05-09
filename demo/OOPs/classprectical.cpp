#include <iostream>
using namespace std;
class super
{
public:
    int a;
    void enter()
    {
        cout << "enter a";
        cin >> a;
    }
};
class sub1 : public super
{
public:
    int b;
    void enter2()
    {
        cout << "enter b";
        cin >> b;
    }
};
class sub2 : public sub1
{
    int c,r;
    public:
    void enter3(){
        cout<<"Enter c";
        cin>>c;
    }
    void show(){
        r=a+b+c;
        cout<<r;
    }
}; 
int main()
{
    sub2 o;
    o.enter();
    o.enter2();
    o.enter3();
    o.show();
}