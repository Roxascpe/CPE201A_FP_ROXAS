#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int service;
    cout << "Input Years of Service: ";
    cin >> service;
    if (service >= 10) {
        cout << "Rating 4-5 " << endl;
    } else if (service >= 5) {
        cout << "Rating 2-3 " << endl;
    } else if (service < 5) {
        cout << "Rating 1 " << endl;
    }else {
        cout << "FAILED" << endl;
    }


   int performance;
    cout << "Enter rating number 1-5: ";
    cin >> performance;
    
    switch (performance){
        case 1:
        cout << "No Bonus";
            break;
        case 2:
        cout << "5,000";
            break;
        case 3:
        cout << "10,000";
            break;
        case 4:
        cout << "15,000";
            break;
        case 5:
        cout << "20,000";
            break;
        default:
            cout << "INVALID";
            break;
    }
    return 0;
}