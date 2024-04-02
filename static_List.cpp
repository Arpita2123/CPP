#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class StaticList {
private:
    int data[MAX_SIZE];
    int size;

public:
    // Constructor to initialize the list
    StaticList() {
        size = 0;
    }

    // Function to add an element to the list
    void addElement(int element) {
        if (size < MAX_SIZE) {
            data[size] = element;
            size++;
        } else {
            cout << "List is full. Cannot add more elements.\n";
        }
    }

    // Function to display the elements of the list
    void displayList() const {
        cout << "Elements of the list: ";
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // Create an object of the StaticList class
    StaticList myList;

    // Add elements to the list
    myList.addElement(10);
    myList.addElement(20);
    myList.addElement(30);

    // Display the elements of the list
    myList.displayList();

    return 0;
}