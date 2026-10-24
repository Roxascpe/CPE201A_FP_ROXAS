#include <iostream>
#include <fstream>
using namespace std; 

int main () {
    ifstream in("notes.txt");
    string line; 
    in >> line; 
    cout << line << endl; // one word getline(in, line) cout << line <<endl; to get all of the words 
    in.close();
    return 0; 
}