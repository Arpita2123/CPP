#include<iostream>

using namespace std;
#define MAX 100

class Stack{
	           int a[MAX];
	           int top ;
	           
	 public :
	 Stack () : top(-1) {} // constructor to initialize the top
	 
     void push( int element )
     {
 	 	if ( top >= (MAX-1))
 	 	{
 	 		cout << " Stack overflow ";
	    }
	   
 		else
 		{
 			a[++top] = element;
 			
 		}
     }	 
     
     void pop ()
     {
         if (a[top] == -1)
         {
             cout << "stack underflow";
         }
         else 
         {
             a[top--];
         }
     }
     
     void display()
     {
         for (int i = top ; i>=0 ; i--)
         {
             cout << a[i] << endl ;
         }
     }
		 
	          
};

int main()
{
    Stack s;	
    s.push(2);
    s.push(4);
    s.push(6);
	
	cout << "Elements in stack :" << endl;
	s.display();
	
	s.pop();
	cout << "Elements in stack after pop :" << endl;
	s.display();
	return 0;
	
}
