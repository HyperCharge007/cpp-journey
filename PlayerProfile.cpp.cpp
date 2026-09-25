#include <iostream>
using namespace std;

int main(){

    string name;
    int age;
    float height;
    string position;

    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Enter your age: " << endl;
    cin >> age;
    cout << "Enter your height (cm): " << endl;
    cin >> height;
    cout << "Enter your favourite position: " << endl;
    cin >> position;

    cout << "----- PLAYER PROFILE -----" << endl;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " cm" << endl;
    cout << "Position: " << position << endl;

    int newAge = age + 5;

    cout << "After 5 years, your age will be: " << newAge << endl;

    int dribbling;
    int passing;
    int shooting;
    int physical;

    cout << "Enter dribbling: " << endl;
    cin >> dribbling;
    cout << "Enter passing: " << endl;
    cin >> passing;
    cout << "Enter shooting: " << endl;
    cin >> shooting;
    cout << "Enter physical: " << endl;
    cin >> physical;

    int overall = (dribbling + passing + shooting + physical)/4;
    cout << "Player Overall: " << overall << endl;

    if (overall >= 90) cout << "World class player" << endl;
    else if (80 <= overall && overall < 90) cout << "Elite player" << endl;
    else if (70 <= overall && overall < 80) cout << "Good player" << endl;
    else cout << "Needs training" << endl;

    return 0;
}