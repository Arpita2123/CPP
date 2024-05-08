#include<iostream>
#include<string.h>
using namespace std;

struct employee
{
	char name[100];
	int age;
	int phone_no;
	float salary;
	
}e;

void set(struct employee *e)
{
    cout<<"Enter the employee name: ";
    cin>>e->name;

    cout<<"Enter employee age: ";
    cin>>e->age;

    cout<<"Enter the employee phone number: ";
    cin>>e->phone_no;
    
    cout<<"Enter person's salary: ";
    cin>>e->salary;
    
    cout<<endl;
} 
 
void get(struct employee *e)
{
    {
        cout<<"Name: "<<e->name<<endl;
        cout<<"Age: "<<e->age<<endl;
        cout<<"Phone number: "<<e->phone_no<<endl;
        cout<<"Salary: "<<e->salary<<endl;
    }
}

void validage(struct employee *e) // Fixed typo "struct emplyee"
{
	if(e->age <= 59)
	{
		cout<<"Valid age";
	}
	else
	{
		cout<<"Invalid age";
	}
}

int main()
{
    set(&e);
    get(&e);
    validage(&e);
    return 0; // Added return statement
}
