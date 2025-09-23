#include<iostream>
using namespace std;
class Student {
public:
    string name;
    string email;
    int rollNo;
};
int main(){
    Student s1; // Object // Reference // Instance // Variable
    s1.name = "Sahana";
    s1.email = "sahana@bizotic.com";
    s1.rollNo = 102;
    Student s2 = Student(); // ClassName() -> Constructor
    return 0;
}