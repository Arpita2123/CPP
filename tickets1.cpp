#include<iostream>
using namespace std;

class Ticket
{
	private :
		int ticket , no_of_tickets;
		
	public :
	   
	    Ticket (int ticket , int no_of_ticket)
		{
			this -> ticket = ticket ;
			this -> no_of_tickets = no_of_ticket ;
		}
		
		void display()
		{
			cout << "Tickets :" << ticket << endl ;
			cout << "no_of_tickets : " << no_of_tickets << endl ;
		}	
};

int main()
{
	Ticket t(120,3);
	t.display();
	return 0 ;
}
