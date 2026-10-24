#include <iostream>
#include <cmath>
using namespace std;
//Area of a circle
int main () { 

    //What is the formula of an area of a circle?
    //pi*r^2

    float pi = 3.14; // Constant 
    float radius;
    cout << "Input a radius number" << endl;
    cin >> radius;
    float area = pi*pow(radius,2);
    cout << "The area is: " << area;
    
    return 0;
}