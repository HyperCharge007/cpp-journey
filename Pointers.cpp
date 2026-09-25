#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector<string> courses = {"Chem", "Phy", "Maths"};
    vector<string>* coursesPtr = &courses; //copy

    // arrow operator (* ). = ->
    coursesPtr->push_back("French");

    for (size_t i = 0; i < courses.size(); i++)
    {
        cout << courses[i] << " ";
    }
    cout << endl;

    for (size_t i = 0; i < coursesPtr->size(); i++)
    {
        cout << (*coursesPtr)[i] << " ";
        //cout << coursesPtr->operator[](i) << endl;  (ANOTHER METHOD USING ARROW OP)
    }
    cout << endl;
}