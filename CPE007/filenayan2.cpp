#include <iostream>
#include <fstream>
using namespace std; 

int main () {
    ifstream in("notes.txt");
    string line; 
    int n = 0;
    while (getline (in, line)){
        n++;
        cout << n << ": " << endl;
    }
    in.close();
    return 0; 
}