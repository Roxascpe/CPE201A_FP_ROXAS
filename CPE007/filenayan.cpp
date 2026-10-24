#include <iostream>
#include <fstream>
using namespace std; 

int main () {
    ofstream outFile;
    outFile.open("Students.txt"); //ios :: app to dagdag 
    if (!outFile.is_open()){
        cout <<"Error: cannot open" << endl;
        return 1;
    }
    outFile << "1001 Ana 92.5" << endl;
    outFile << "1002 Ben 88.5" << endl;
    outFile.close();
    cout << "Students.txt written." << endl;
    return 0; 
}