#include<iostream>
using namespace std;

struct person
{
    char name[100];
    char address[100];
    int age;
    int salary;
}p;

void set(struct person *p)
{
    cout<<"enter person name = ";
    cin>>p->name;

    cout<<"enter person address = ";
    cin>>p->address;

    cout<<"enter person's age = ";
    cin>>p->age;
    
    cout<<"enter person's salary = ";
    cin>>p->salary;
    
    cout<<endl;
}

void get(struct person *p)
{
    {
        cout<<"Name = "<<p->name<<endl;
        cout<<"Address = "<<p->address<<endl;
        cout<<"Age = "<<p->age<<endl;
        cout<<"Salary = "<<p->salary<<endl;
    }
}

int main()
{
    set(&p);
    get(&p);
}
