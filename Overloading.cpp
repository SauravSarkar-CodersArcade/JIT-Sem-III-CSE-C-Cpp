#include<iostream>
using namespace std;
class Addition {
public:
    static void add(int a, int b){
        cout << a + b << endl;
    }  
    static void add(int a, int b, int c){
        cout << a + b << endl;
    }  
    static void add(float a, float b){
        cout << "Float" << endl;
        cout << a + b << endl;
    }
    static void add(double a, double b){
        cout << "Double" << endl; 
        cout << a + b << endl;
    }
       
};
int main(){
    Addition::add(1,2);
    Addition::add(1,2,3);
    Addition::add(3.4545f, 2.9605F);
    Addition::add(2.5,3.6);
    return 0;
}