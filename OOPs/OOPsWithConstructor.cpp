#include<iostream>
using namespace std;
class Student {
public:
    string name;
    string email;
    int rollNo;
    Student(string Name, string Email, int RollNo){
        name = Name;
        email = Email;
        rollNo = RollNo;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
        cout << "Roll No: " << rollNo << endl;
    }
    static void collegeName(){
        cout << "JIT COllege" << endl;
    }
    ~Student(){
        cout << "Object has been destroyed...!!!" << endl;
    }
};
int main(){
    Student s1("Sahana", "sahana@bizotic.com", 102); // Object // Reference // Instance // Variable
    Student s2 = Student("Ramya", "ramya@bizotic.com", 103); // ClassName() -> Constructor
    s1.display();
    s2.display();
    Student::collegeName();
    return 0;
}