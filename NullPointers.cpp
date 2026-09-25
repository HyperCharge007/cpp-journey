#include<iostream>

using namespace std;

int main()
{
    int a = 10, b = 15, c = 20;
    //a = b = c = 20;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    //int* aPtr, bPtr, cPtr; // aPtr = pointer to an int; bPtr and cPtr are int
    int *aPtr = &a, *bPtr = &b, *cPtr = &c;

    cout << "aPtr: " << aPtr << " *aPtr: " << *aPtr << endl;
    cout << "bPtr: " << bPtr << " *bPtr: " << *bPtr << endl;
    cout << "cPtr: " << cPtr << " *cPtr: " << *cPtr << endl;

    int *dPtr, *ePtr;
    dPtr = ePtr = nullptr;
    // Never dereference null pointers, it leads to Segmentation Fault (error)

    return 0;
}