#include <iostream>
using namespace std;

int main () {
   int print;
    cout << "Enter a number 1-3 ";
    cin >> print;
    
    switch (print){
        case 1:
        cout << "GOLD";
            break;
        case 2:
        cout << "SILVER";
            break;
        case 3:
        cout << "BRONZE";
            break;
        default:
            cout << "Anything Else";
            break;
    }
    
    return 0;
}