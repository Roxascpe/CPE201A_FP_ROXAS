#include <iostream>
#include <fstream>
using namespace std; 

int main () {
    int age; 
    string name;
    cout << "Age: ";
    cin >>age;
    cin.ignore(1000, '\n');
    getline(cin,name);
    cout << "Name: ";
    getline(cin, name);
    cout<< "Hello [" << name << "], age " << age << endl;
    return 0; 
}