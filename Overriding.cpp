#include <iostream>
using namespace std;
class Animal {
public:
    virtual void sound(){
        cout << "Some generic animal sound..!!" << endl;
    }
};
class Dog : public Animal {
public:
    void sound() override {
        cout << "Woof!!!" << endl;
    }
};
class Cat : public Animal {
public:
    void sound() override {
        cout << "Meow!!!" << endl;
    }
};
int main() {
    Dog dog;
    Cat cat;
    dog.sound();
    cat.sound();
    return 0;
}