#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        string userInput;
        cin >> userInput;
        if (userInput == "++X" || userInput == "X++") counter++;
        if (userInput == "--X" || userInput == "X--") counter--;
    }

    cout << counter << endl;

    return 0;
}