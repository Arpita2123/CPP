#include<iostream>
#include<string>
using namespace std;

class Person
{
    public :
      string name;
      string address;
      int age;
};

class Employee : public Person
{
    public:
      int id ;
      int salary;

    public :void getdata()
    {
        cout << "Enter the Employee name : ";
        cin >> name ;

        cout << "\nEnter the Employee address : ";
        cin >> address ;

        cout << "\nEnter the Employee age : ";
        cin >> age ;

        cout << "\nEnter the Employee id : ";
        cin >> id ;

        cout << "\nEnter the Employee salary : ";
        cin >> salary ;
    }

    public : void display()
    {
        cout << "Name :" << name << endl;
        cout << "Address :" << address << endl;
        cout << "Age :" << age << endl;
        cout << "Id :" << id << endl;
        cout << "Salary :" << salary << endl;
    }
        
};

int main()
{
    Employee em ;
    em.getdata();
    em.display();
    return 0;
}
