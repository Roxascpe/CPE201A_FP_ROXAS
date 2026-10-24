#include <iostream>
using namespace std;

int main () {
    int score; 
    cout << "Enter Score: ";
    cin >> score;
    if (score >= 90) {
        cout << "Grade A ";
    } else if (score >= 88) {
        cout << "Grade B ";
    } else if (score >= 70) {
        cout << "Grade C ";
    } else if (score >= 60) {
        cout << "FAILED";
    } else {
        cout << "DROP";
    }

    return 0;
}