#include<iostream>

using namespace std;

int main()
{
    //static memory - stack memory (allocated at build/compile time)
    //dynamic memory - heap memory/free store (allocated at run time), needs to be cleaned up
    //heap is larget than stack and is used when you don't know how much memory you need ahead of time

    int savings = 10000; // created and stored on the stack
    cout << &savings << " " << savings << endl;
    
    int* savingsPtr = new int(50000); // created on the heap with new keyword
    cout << &savingsPtr << endl; //address on stack
    cout << savingsPtr << " " << *savingsPtr << endl; //address on heap

    delete savingsPtr; //free up memory on heap to stop memory leak
    //dangling pointer
    savingsPtr = nullptr;

    return 0;
}

