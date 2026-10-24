#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int score;
    cout << "Input Score: ";
    cin >> score;
    if (score >= 90) {
        cout << "PASSED, Grade A ";
    } else if (score >= 88) {
        cout << "PASSED, Grade B ";
    } else if (score >= 70) {
        cout << "PASSED, Grade C ";
    }else {
        cout << "FAILED";
    }


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