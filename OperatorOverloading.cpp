#include <iostream>
using namespace std;
class Box {
    int length;
public:
    Box(int l = 0) : length(l) {}
    Box operator + (Box &b){
       return Box(this->length + b.length); 
    } 
    Box operator - (Box &b){
       return Box(this->length - b.length); 
    }
    void show(){
        cout << "Length: " << length << endl;
    }
};
int main() {
    Box b1(5), b2(10);
    Box b3 = b1 + b2;
    Box b4 = b1 - b2;
    b1.show();
    b2.show();
    b3.show();
    b4.show();
    return 0;
}