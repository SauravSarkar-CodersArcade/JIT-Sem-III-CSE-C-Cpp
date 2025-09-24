#include<iostream>
#include<string.h>
using namespace std;
struct Store
{
    int price; // Any common property should be outside 
    union{
    // Shirt
        struct{
        char size[10];
        char color[10];
        char brand[20];
        }shirt;
    // Book
        struct{
        char genre[20];
        char design[20];
        int isbn;
        }book;
    }item;
};
int main(){
    struct Store s;
    strcpy(s.item.shirt.size, "M");
    strcpy(s.item.shirt.color, "Blue");
    strcpy(s.item.shirt.brand, "Zara");
    s.price = 899;
    cout << "Size: " << sizeof(s) << " Bytes." << endl; 
    return 0;
}