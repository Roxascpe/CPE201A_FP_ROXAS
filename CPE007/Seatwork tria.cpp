#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int service;
    cout << "Input Years of Service: ";
    cin >> service;
    if (service >= 10) {
        cout << "PASSED, Grade A ";
    } else if (service >= 9) {
        cout << "PASSED, Grade B ";
    } else if (service <= 5) {
        cout << "PASSED, Grade C ";
    }else {
        cout << "FAILED";
    }
return 0;
}
