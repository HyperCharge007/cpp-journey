#include<iostream>
#include<string>

using namespace std;

int main(){
    string guessWord = "Kenny";
    string inputWord;
    int guessTurn = 1;

    // cout<<"Guess #" << guessTurn++ << endl;
    // getline(cin, inputWord);

    // while (inputWord != guessWord && !inputWord.empty()){
    //     cout<<"Guess #" << guessTurn++ << endl;
    //     getline(cin, inputWord);
    // }

    do {
        cout<<"Guess #" << guessTurn++ << endl;
        getline(cin, inputWord);
    } while (inputWord != guessWord && !inputWord.empty());

    if (inputWord.empty()){
        cout<<"Quit game!"<<endl;
    }
    else{
        cout<<"Correct guess!"<<endl;
    }

}