#include <iostream>
using namespace std;
int add();
int main()
{

    int ch;
    do
    {

        cout << "Enter 1 for :" << endl;
        cout << "Enter 2 for :" << endl;
        cout << "Enter 3 for :" << endl;
        cout << "Enter 4 for :" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            add();
            break;

        default:
            break;
        }

    } while (ch <= 3);
}
int add()
{
}