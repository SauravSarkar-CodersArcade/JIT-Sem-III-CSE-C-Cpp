#include <iostream>
using namespace std;
class Calculator {
public:
    virtual void calculate(int a, int b){
        cout << "Parent Class Calculator - No Specific Operation."
        << endl;
    }
};
class Add : public Calculator {
public:
    void calculate(int a, int b) override {
        cout << "Addition: " << (a + b) << endl;
    }
};
class Subtract : public Calculator {
public:
    void calculate(int a, int b) override {
        cout << "Subtraction: " << (a - b) << endl;
    }
};
class Multiply : public Calculator {
public:
    void calculate(int a, int b) override {
        cout << "Multiplication: " << (a * b) << endl;
    }
};
class Division : public Calculator {
public:
    void calculate(int a, int b) override {
        cout << "Division: " << (a / b) << endl;
    }
};
int main() {
    Calculator* calc; // Parent Class Pointer Object
    int a = 20, b = 5;
    Add add;
    Subtract sub;
    Multiply mul;
    Division div;
    // Polymorphism in action 
    // Using parent class pointer for child class objects by address 
    calc = &add;
    calc->calculate(a,b);
    calc = &sub;
    calc->calculate(a,b);
    calc = &mul;
    calc->calculate(a,b);
    calc = &div;
    calc->calculate(a,b);
   //  cout << add + sub << endl; Not Allowed
    return 0;
}