#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age";
    cin >> age;
    bool teen = age>= 13 && age <= 19;
    cout << teen;
    
    return 0;
}