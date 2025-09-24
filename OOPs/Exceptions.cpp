#include<iostream>
using namespace std;
class Printer {
    string _name;
    
public:
    int _availablePaper;
    Printer(string name, int paper){
        _name = name;
        _availablePaper = paper;
    }
    void PrintDoc(string txtDoc){
        // 40 / 10 = 4 pages
        int requiredPaper = txtDoc.length() / 10;
        cout << "Printing....!!!!" << txtDoc << endl;
        if(requiredPaper > _availablePaper){
            // throw 404;
            throw "Please Add More Paper Before Printing!";
        }
        _availablePaper -= requiredPaper;
    }
};
int main(){
    Printer myPrinter("HP LaserJet-3020Ti", 10);
    try{
    myPrinter.PrintDoc("Hello, I am Tushar. I am an SDE");
    myPrinter.PrintDoc("Hello, I am Yashas. I am an SDT");
    myPrinter.PrintDoc("Hello, I am Suprada. I am an SDI");
    myPrinter.PrintDoc("Hello, I am Satwik. I am an SDI");
    }
    
    catch(int errorCode){
        cout << errorCode << "No Paper Available." << endl;
    }
    catch(const char * txtException){
        cout << txtException << endl;
    } 
    catch(...){
        cout << "Something unexpected happened!" << endl;
    }
    cout << myPrinter._availablePaper << endl << endl;
    return 0;
}