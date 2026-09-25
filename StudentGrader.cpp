#include <iostream>
using namespace std;

int main () {

    string name;
    int chemMarks;
    int phyMarks;
    int mathsMarks;

    string grade;

    cout<<"Enter name: "<<endl;
    cin>>name;

    cout<<"Enter chemistry marks: "<<endl;
    cin>>chemMarks;

    cout<<"Enter physics marks: "<<endl;
    cin>>phyMarks;

    cout<<"Enter maths marks: "<<endl;
    cin>>mathsMarks;

    int totalMarks =  chemMarks+phyMarks+mathsMarks;
    float percentage = totalMarks/3.0f;

    if (percentage>=90) grade = "A+";
    else if (percentage>=80) grade = "A";
    else if (percentage>=70) grade = "B";
    else if (percentage>=60) grade = "C";
    else if (percentage>=50) grade = "D";
    else grade = "F";

    cout<<"-----REPORT CARD------"<<endl;
    cout<<endl;
    cout<<"Name: "<<name;
    cout<<endl;
    cout<<"Chemistry: "<<chemMarks<<"/100"<<endl;
    cout<<"Physics: "<<phyMarks<<"/100"<<endl;
    cout<<"Maths: "<<mathsMarks<<"/100"<<endl;
    cout<<endl;
    cout<<"Total: "<<totalMarks<<endl;
    cout<<"Percentage: "<<percentage<<"%"<<endl;
    cout<<endl;
    cout<<"Grade: "<<grade<<endl;
    return 0;
}