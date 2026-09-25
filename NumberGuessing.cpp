#include<iostream>
#include<string>
#include<vector>
#include<random>
#include<cmath>

using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<> dist(1,100);

    int secretNumber = dist(gen);
    int attempts = 0;

    while(true){
        int userGuess;
        cout<<"Enter your guess from 1 to 100:";
        cin>>userGuess;

        attempts++;

        int diff = abs(secretNumber-userGuess);

        if (userGuess == secretNumber){
            cout<<"You guessed right!"<<endl;
            cout<<"You took "<<attempts<<" attempts"<<endl;
            break;
        }
        else if (diff>=10 && diff<=15){
            cout<<"Warm!"<<endl;
        }
        else if (diff>=15){
            cout<<"Cold!"<<endl;
        }
        else if (diff<10){
            cout<<"Hot!"<<endl;
        }

        //cout<<"Attempts: "<<attempts<<endl;
    }
}