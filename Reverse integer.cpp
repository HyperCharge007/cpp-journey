#include<iostream>

using namespace std;

int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;
    int tempNum = number;
    int reverse = 0;

    while (number>0){
        int digit=number%10;
        reverse= reverse*10+digit;
        number=number/10;
    }

    cout<<reverse<<endl;

    if (reverse==tempNum){
        cout<<"YOU FOUND A PALINDROME!";
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }
}