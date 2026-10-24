#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    cout << "Testing character: '" << ch << "'\n\n";

    cout << "isalpha:  " << (isalpha(ch) ? "true" : "false") << endl;
    cout << "isdigit:  " << (isdigit(ch) ? "true" : "false") << endl;
    cout << "isalnum:  " << (isalnum(ch) ? "true" : "false") << endl;
    cout << "isspace:  " << (isspace(ch) ? "true" : "false") << endl;
    cout << "iscntrl:  " << (iscntrl(ch) ? "true" : "false") << endl;
    cout << "ispunct:  " << (ispunct(ch) ? "true" : "false") << endl;
    cout << "isprint:  " << (isprint(ch) ? "true" : "false") << endl;
    cout << "isgraph:  " << (isgraph(ch) ? "true" : "false") << endl;
    cout << "isupper:  " << (isupper(ch) ? "true" : "false") << endl;
    cout << "islower:  " << (islower(ch) ? "true" : "false") << endl;

    cout << "\ntoupper:  " << (char)toupper(ch) << endl;
    cout << "tolower:  " << (char)tolower(ch) << endl;

    return 0;
}