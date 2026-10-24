#include <iostream>
#include <fstream>
using namespace std; 

int main () {
    ofstream out("notes.txt");
    out << "Hello World" << endl; 
    out.close ();
    return 0; 
}