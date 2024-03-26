#include<iostream>
using namespace std;

int main()
{
    
    int age ;
    cout << "Enter your age :";
    cin >> age;
    if(age <= 18)
    {
        cout << "You are not eligible for vote."; 
    }
    else
    {
        cout << "elgible for vote.";
    }

    
    
    return 0;
}