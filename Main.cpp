#include <iostream>
#include <math.h>
using namespace std;

int main() {

    // numbers - int, float, double
    20; 500; -100; 0; // int
    1.5f; 9.99f; 3.14f; 10.0f; // float (7 pp)
    1.5; 9.99; 3.14; 10.0; // double (15 pp)

    // logical values - bool
    true; false; 

    // character - char
    'a'; 'B', '$', '5'; // single quotes
    "abc", "C++"; // strings - double quotes

    // Arithmetic operators +, -, /, %, pow
    int x = 5;
    int y = 2;
    float z = (float) x/y; // type casting
    cout << z << endl;
}