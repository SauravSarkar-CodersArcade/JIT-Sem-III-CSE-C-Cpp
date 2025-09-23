#include<iostream>
using namespace std;
class Employee {
public:
    // Instance Variables - this
    string Name;
    int Age;
    string Company;
    Employee(string Name, int Age, string Company){
        this->Name = Name;
        this->Age = Age;
        this->Company = Company;
    }
    void display(){
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Company: " << Company << endl;
    }
};
int main(){
    Employee e1 = Employee("Sahana", 21, "Bizotic");
    e1.display();
    return 0;
}