#include<iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:
    Complex() {
        real = 0;
        imaginary = 0;
    }

    Complex(int r, int i) {
        real = r;
        imaginary = i;
    }

    Complex operator+(Complex &c2) {
        Complex c3;
        c3.real = real + c2.real;
        c3.imaginary = imaginary + c2.imaginary;
        return c3;
    }

    Complex operator-(Complex &c2) {
        Complex c3;
        c3.real = real - c2.real;
        c3.imaginary = imaginary - c2.imaginary;
        return c3;
    }

    void setReal(int r) {
        real = r;
    }

    int getReal() {
        return real;
    }

    void setImaginary(int i) {
        imaginary = i;
    }

    int getImaginary() {
        return imaginary;
    }
};

int main() {
    Complex c1, c2, c3;
    int r1, r2, i1, i2;

    cout << "Enter real part of c1: ";
    cin >> r1;
    c1.setReal(r1);

    cout << "Enter imaginary part of c1: ";
    cin >> i1;
    c1.setImaginary(i1);

    cout << "Enter real part of c2: ";
    cin >> r2;
    c2.setReal(r2);

    cout << "Enter imaginary part of c2: ";
    cin >> i2;
    c2.setImaginary(i2);

    c3 = c1 + c2;
    cout << "Sum: " << c3.getReal() << " + " << c3.getImaginary() << "i" << endl;

    c3 = c1 - c2;
    cout << "Difference: " << c3.getReal() << " - " << c3.getImaginary() << "i" << endl;

    return 0;
}
