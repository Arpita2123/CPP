//function overloading or compile-time polymorphism


#include<iostream>
using namespace std ;

class Value 
{
	public:
		 void fun(int x)
		 {
		 	cout << "Value of x is :" << x << endl;
		 }
		 
    public :
	     void fun(double x)
		 {
		 	cout <<  " Value of x is :" << x << endl;
		 }
		 	
    public :
	     void fun(int x, int y)
		 {
		 	cout << "Value of x and y :" << x <<","<< y <<endl;
		}			 	 
 };
 
 int main()
 {
 	Value val;
 	val.fun(500);
 	val.fun(12.6549);
 	val.fun(45,65);
 	return 0;
 }
  
