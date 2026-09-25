#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int studentCount;
    vector<string> studentNames;
    vector<int> studentMarks;

    cout<<"How many students? ";
    cin>>studentCount;

    string name;

    for (int i = 0; i < studentCount; i++){
        cout<<"Enter student name: ";
        cin>>name;

        studentNames.push_back(name);
    }

    int marks;
    
    for (int j = 0; j < studentCount; j++){
        cout<<"Enter student marks: ";
        cin>>marks;

        studentMarks.push_back(marks);
    }

    for (int m = 0; m < studentCount; m++){
        cout<<studentNames[m]<<"-"<<studentMarks[m]<<endl;
    }
}