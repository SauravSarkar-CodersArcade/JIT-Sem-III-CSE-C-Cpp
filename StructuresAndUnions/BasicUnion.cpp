#include<iostream>
#include<string.h>
using namespace std;
union Employee {
    // char * name; // ???? Largest Size of a pointer 8 bytes
    char name[20]; // 20 bytes
    int age; // 4 bytes
    int empID; // 4bytes
};
int main(){
    union Employee e1;
    // e1.name = "Ashank"; // Static Allocation 
    // Assign & Display @ that very momemnt
    strcpy(e1.name, "Ashank");
     cout << "Name: " << e1.name << endl;
    e1.age = 30;
    cout << "Age: " << e1.age << endl;
    e1.empID = 1001;
    cout << "Employee ID: " << e1.empID << endl;
    cout << "Size: " << sizeof(e1) << " bytes." << endl;
    return 0;
}