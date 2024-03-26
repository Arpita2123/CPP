#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    int a=2 ,b=454 , c=5345;

    cout << "the value of a without setw is : "<< a << endl;
    cout << "the value of b without setw is : "<< b << endl;
    cout << "the value of c without setw is : "<< c << endl;
    cout << "the value of a is : "<< setw(4) << a << endl;
    cout << "the value of b is : "<< setw(4) << b << endl;
    cout << "the value of c is : "<< setw(4) << c << endl;

    return 0;
}
