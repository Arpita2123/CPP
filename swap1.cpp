#include<iostream>
using namespace std;

int swapReference(int &a , int &b)
{
	int temp = a;
	a = b;
	b= temp ;
	return a;
}

int main()
{
	int x , y;
	cout << "Enter the value of x :" << endl ;
	cin >> x;
	cout << "enter the value of y: "<<  endl;
	cin >> y;
    swapReference(x ,y);
	cout << "After swaping value of x and y :"<< "\n"<<x << "\n" <<y << endl;
	return 0;	
}
