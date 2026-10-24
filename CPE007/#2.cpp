#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string text;

    cout << "Enter sentence: ";
    getline(cin, text);

    int letters = 0, digits = 0, spaces = 0, others = 0;

    for (char ch : text) {
        unsigned char uc = static_cast<unsigned char>(ch);

        if (isalpha(uc)) {
            letters++;
        } else if (isdigit(uc)) {
            digits++;
        } else if (isspace(uc)) {
            spaces++;
        } else {
            others++;
        }
    }

    cout << "Letters: " << letters << endl;
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;
    cout << "Other characters: " << others << endl;

    return 0;
}
