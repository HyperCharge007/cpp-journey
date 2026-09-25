#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector<string> courses = {"Chem", "Phy", "Math"};

    for (size_t i = 0; i < courses.size(); i++){
        cout << courses[i] << " ";
    }
    cout << endl;

    for (const string& course : courses){ // reference to a const string = const ref
        cout << course << " ";
    }
    cout << endl;

    return 0;
}