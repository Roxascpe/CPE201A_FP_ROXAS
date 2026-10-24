#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter score";
    cin >> score;
    if (score >= 90) {
        cout << "Grade A!";
    } else if ( score >= 88) {
        cout << "Grade B!";
    } else if (score >= 70) {
        cout << " Grade C";
    } else {
        cout << "YOU FAILED!";
    }
    
    return 0;
}