#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Constructor
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Setter methods
    void setDay(int d) { day = d; }
    void setMonth(int m) { month = m; }
    void setYear(int y) { year = y; }

    // Getter methods
    int getDay() const { return day; }
    int getMonth() const { return month; }
    int getYear() const { return year; }

    // Function to check if a year is a leap year
    bool isLeapYear() const {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return true;
        else
            return false;
    }
};

int main() {
    // Create a Date object
    Date myDate(1, 1, 2024);

    // Use getter methods to access attributes
    std::cout << "Day: " << myDate.getDay() << std::endl;
    std::cout << "Month: " << myDate.getMonth() << std::endl;
    std::cout << "Year: " << myDate.getYear() << std::endl;

    // Check if the year is a leap year
    if (myDate.isLeapYear()) {
        std::cout << myDate.getYear() << " is a leap year." << std::endl;
    } else {
        std::cout << myDate.getYear() << " is not a leap year." << std::endl;
    }

    return 0;
}