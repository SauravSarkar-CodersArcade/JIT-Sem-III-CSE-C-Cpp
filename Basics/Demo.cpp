#include<iostream>
using namespace std;
namespace dev1 {
    void add(int x, int y){
        cout << x + y << endl;
    }
}
namespace dev2
{
    int a = 200;
    void add(int x, int y){
    cout << x + y << endl;
}
} 
int main(){ // Scope Resolution Operator ::
    // dev1::add(1,2);
    // dev2::add(4,5); 
    // bool status = true; 
    // string name;
    // cout << "Enter the name:" << endl;
    // // cin >> name; // It can only print till the space
    // getline(cin, name);
    // // Virat Kohli
    // cout << name; 
    cout << "INT_MAX = " << INT_MAX + 1 << endl;
    cout << "INT_MIN = " << INT_MIN - 1 << endl;
    return 0;
}