#include<iostream>
using namespace std;

int glo = 6; //globle variable 
void sum()
{
    int a ;
    cout << glo ;
}

int main()
{
    int a = 12;
    int b = 43;
    //float pi = 3.14 ;
    //char c = 'A';

    //cout <<"The value of a is " <<a<< "\nThe value of b is"<<b;
    //cout << "\nthe value of pi is "<<pi;
    //cout <<" \nThe value of c is "<<c;

    int glo = 50; //Local variable
    glo = 88;     //Local variable 

    sum ();
    cout << glo ; // First print globle variable and then print local variable .
    
    //bool h =true ;
    //cout << h;
    //bool k = false;
    //cout << "\n"<< k;

    return 0;
}
