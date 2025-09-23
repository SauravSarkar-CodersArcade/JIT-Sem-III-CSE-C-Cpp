#include<iostream>
using namespace std;
class Teacher {
public:
    void teach(){
        cout << "Teach Students...." << endl;
    }
};
class SportsCoach {
public:
    void train(){
        cout << "Train Players...." << endl;
    }
};
class Person : public Teacher, public SportsCoach {
    public:
    void introduce(){
        cout << "I am a person who is a teacher & a trainer...!!!!" << endl;
    }
};
int main(){
    Person p;
    p.introduce();
    p.teach();
    p.train();
    return 0;
}