#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter score";
    cin >> score;
    if (score >= 75) {
        cout << "YOU PASSED!";
    } else {
        cout << "YOU FAILED!";
    }
    
    return 0;
}