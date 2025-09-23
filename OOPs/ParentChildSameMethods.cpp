#include<iostream>
using namespace std;
class Parent {
public:
    void display(){
        cout << "Parent Display()" << endl;
    }
};
class Child : public Parent {
public:
    void display(){
        cout << "Child Display()" << endl;        
    }
};
int main(){
    Child c;
    c.Parent::display();
    return 0;
}