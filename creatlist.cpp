#include<iostream>
using namespace std;
 
class Node {
	public:
	int data ;
	Node* next; 
};

class List{
	private: Node *head;
	

    public:	

       List()
       {
         head = nullptr;
       }
	   void insert( int d )
	   {
	 	  
	 	  Node* newNode = new Node ;
		   newNode->data = d;
		   newNode->next = nullptr ; 
		   head = newNode;
		   
	   }
	 void showInfo()
     {
        if (head != nullptr)
        {
        cout << head->data ;
        }
        
     }
	
};

int main()
{
    List l;
	l.insert(2);
	l.showInfo();
	return 0;	
}