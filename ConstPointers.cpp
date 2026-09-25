#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    int savings = 5000;
    const int savings2 = 10000; // do not touch

    int* const savingsPtr = &savings; //const pointer to an int
    *savingsPtr += 100;
    //savingsPtr = &savings2; ERROR

    // these two are the same
    const int* savingsPtr2 = &savings2; // pointer to an int that is constant
    int const* savingsPtr3 = &savings2; // pointer to a const int
    // *savingsPtr2 += 1800;  ERROR
    // *savingsPtr3 += 1800;  ERROR

    const int* const savingsPtr4 = &savings2; // const pointer to a const int
    // savingsPtr4 = &savings;  ERROR

    cout << savings << endl;
    cout << savings2 << endl;

    return 0;
}