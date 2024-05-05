#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    Person(string name) : name(name) {}

    void setName(const string& newName) {
        name = newName;
    }

    string getName() const {
        return name;
    }

private:
    string name;
};

class Customer {
public:
    Customer(string customerID) : customerID(customerID) {}

    void setCustomerID(const string& newCustomerID) {
        customerID = newCustomerID;
    }

    string getCustomerID() const {
        return customerID;
    }

private:
    string customerID;
};

class Employee {
public:
    Employee(int employeeNumber) : employeeNumber(employeeNumber) {}

    void setEmployeeNumber(int newEmployeeNumber) {
        employeeNumber = newEmployeeNumber;
    }

    int getEmployeeNumber() const {
        return employeeNumber;
    }

private:
    int employeeNumber;
};

class EmployeeCustomer {
public:
    EmployeeCustomer(string name, string customerID, int employeeNumber)
        : person(name), customer(customerID), employee(employeeNumber) {}

    void setName(const string& newName) {
        person.setName(newName);
    }

    string getName() const {
        return person.getName();
    }

    void setCustomerID(const string& newCustomerID) {
        customer.setCustomerID(newCustomerID);
    }

    string getCustomerID() const {
        return customer.getCustomerID();
    }

    void setEmployeeNumber(int newEmployeeNumber) {
        employee.setEmployeeNumber(newEmployeeNumber);
    }

    int getEmployeeNumber() const {
        return employee.getEmployeeNumber();
    }

private:
    Person person;
    Customer customer;
    Employee employee;
};

int main() {
   EmployeeCustomer ram("Ram", "C123", 456);

   cout << "Name: " << ram.getName() << endl;
   cout << "Customer ID: " << ram.getCustomerID() << endl;
   cout << "Employee Number: " << ram.getEmployeeNumber() << endl;

   return 0;
}
