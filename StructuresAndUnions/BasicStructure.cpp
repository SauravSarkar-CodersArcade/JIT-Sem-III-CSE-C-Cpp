#include<iostream>
#include<string.h>
using namespace std;
struct Employee {
    // char * name; // ???? Largest Size of a pointer 8 bytes
    char name[20]; // 20 bytes
    int age; // 4 bytes
    int empID; // 4bytes
};
int main(){
    struct Employee e1;
    // e1.name = "Ashank"; // Static Allocation
    strcpy(e1.name, "Ashank");
    e1.age = 30;
    e1.empID = 1001;
    cout << "Name: " << e1.name << endl;
    cout << "Age: " << e1.age << endl;
    cout << "Employee ID: " << e1.empID << endl;
    cout << "Size: " << sizeof(e1) << " bytes." << endl;
    return 0;
}