#include <cctype>
#include <iostream>
#include <string>
using namespace std;

bool isPunctuation(char ch) {
    return ispunct(static_cast<unsigned char>(ch)) != 0;
}

int main() {
    string password;
    cout << "Enter password: ";
    getline(cin, password);

    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasPunctuation = false;
    bool hasWhitespace = false;

    for (char ch : password) {
        unsigned char u = static_cast<unsigned char>(ch);

        if (isupper(u)) {
            hasUpper = true;
        } else if (islower(u)) {
            hasLower = true;
        } else if (isdigit(u)) {
            hasDigit = true;
        } else if (isspace(u)) {
            hasWhitespace = true;
        } else if (isPunctuation(ch)) {
            hasPunctuation = true;
        }
    }

    bool valid = password.length() >= 8 && hasUpper && hasLower && hasDigit &&
                 hasPunctuation && !hasWhitespace;

    if (valid) {
        cout << "Password is valid.\n";
    } else {
        cout << "Password is invalid. It must:\n";

        if (password.length() < 8) {
            cout << "- contain at least 8 characters\n";
        }
        if (!hasUpper) {
            cout << "- contain at least one uppercase letter\n";
        }
        if (!hasLower) {
            cout << "- contain at least one lowercase letter\n";
        }
        if (!hasDigit) {
            cout << "- contain at least one digit\n";
        }
        if (!hasPunctuation) {
            cout << "- contain at least one punctuation character\n";
        }
        if (hasWhitespace) {
            cout << "- contain no whitespace characters\n";
        }
    }

    return 0;
}
