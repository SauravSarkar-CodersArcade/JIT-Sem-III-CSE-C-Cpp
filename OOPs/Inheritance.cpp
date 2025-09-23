#include<iostream>
using namespace std;
class Employee {
public:
    string Name;
    int Age;
    string Company;
    Employee(string name, int age, string company){
        Name = name;
        Age = age;
        Company = company;
    }
    void employeeDetails(){
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Company: " << Company << endl;
    }
};
class Lecturer : public Employee {
public:
    string Subject;
    Lecturer(string name, int age, string company, string subject)
    : Employee(name, age, company){
        Subject = subject;
    }
    void teach(){
        cout << Name << " teaches " << Subject << endl;
    }
};
class SoftwareDeveloper : public Employee{
public:
    string FavProLang;
    SoftwareDeveloper(string name, int age, string company, string fPL)
    : Employee(name, age, company){
        FavProLang = fPL;        
    }
    void createApps(){
        cout << Name << " uses " << FavProLang << " to create apps.\n";
    }
};
int main(){
    Employee e1("Sahana", 34, "Bizotic");
    e1.employeeDetails();
    Lecturer l1("Akhilesh", 36, "JIT", "ADA"); 
    l1.employeeDetails();
    l1.teach();
    SoftwareDeveloper s1("Ashank", 30, "Bizotic", "Python");
    s1.employeeDetails();
    s1.createApps();
    return 0;
}