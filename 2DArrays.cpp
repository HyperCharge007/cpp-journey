#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
    vector<vector<string>> studentClasses = {
        {"Chemistry", "Algebra", "English"},
        {"French"}, {"Chemistry", "Physics"},
        {"English", "Economics", "Stats"}
    };

    studentClasses[2].push_back("Geography");

    for (size_t i = 0; i < studentClasses.size(); i++) {
        for (size_t j = 0; j < studentClasses[i].size(); j++) {
            cout << studentClasses[i][j] << " ";
        }
        cout << endl;
    }
}