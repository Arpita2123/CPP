#include<iostream>
using namespace std;

class student
{
    string name;
    int roll;
    float marks;
    
public:
    int getRoll() ;
    string getname() ;
    float getmarks() ;
    void setRoll(int);
    void setname(string);
    void setmarks(float);
    student(); // Removed redundant semicolon
    student(int,string,float);
    student(const student&);
};

student::student()
{
    roll = 1;
    name = " ";
    marks = 0.0;
}

student::student(int x,string y,float z)
{
    roll = x;
    name = y;
    marks = z;
}

student::student(const student &s)
{
    roll = s.roll;
    name = s.name;
    marks = s.marks;
}

int student::getRoll() 
{
    return roll;
}

string student::getname() 
{
    return name;
}

float student::getmarks() 
{
    return marks;
}

void student::setRoll(int x)
{
    roll = x; // Fixed assignment direction
}

void student::setname(string y)
{
    name = y; // Fixed assignment direction
}

void student::setmarks(float z)
{
    marks = z; // Fixed assignment direction
}

int main()
{
    student s1;
    
    cout<<"The default Roll no. is : "<<s1.getRoll()<<endl;
    cout<<"The default Name no. is : "<<s1.getname()<<endl;
    cout<<"The default marks is : "<<s1.getmarks()<<endl;
    
    student s2(129,"Ram",7.73);
    cout<<"The Roll no. is : "<<s2.getRoll()<<endl;
    cout<<"The Name no. is : "<<s2.getname()<<endl;
    cout<<"The marks is : "<<s2.getmarks()<<endl;
    
    student s3=s2;
    cout<<"The copied Roll no. is : "<<s3.getRoll()<<endl; // Fixed: should be s3 instead of s2
    cout<<"The copied Name no. is : "<<s3.getname()<<endl; // Fixed: should be s3 instead of s2
    cout<<"The copied marks is : "<<s3.getmarks()<<endl; // Fixed: should be s3 instead of s2
    return 0; // Added return statement
}
