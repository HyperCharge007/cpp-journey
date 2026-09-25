#include<iostream>

using namespace std;

int main()
{
    int studentGrades[5] = {94, 89, 85, 96, 93}; // grade for each course
    //cout << studentGrades << endl;
    //cout << studentGrades[0] << endl;
    //cout << &(studentGrades[0]) << endl;

    int* studentGradesPtr = studentGrades;
    //cout << studentGradesPtr << endl;
    //cout << *studentGradesPtr << endl;

    //final address = starting address + index*size
    //array[index] = *(array + index)
    //index[array] = *(index + array)

    for (int i = 0; i < 5; i++)
    {
        cout << i << ": " << studentGradesPtr << " " << *studentGradesPtr++ << endl;
        //studentGradesPtr++;
    }

    cout << studentGradesPtr << endl;

    return 0;
}