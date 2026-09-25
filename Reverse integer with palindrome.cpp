#include<iostream>

using namespace std;

int main(){
    int number; 
    cout<<"Enter number: "<<endl;
    cin>>number; //take the number input
    int tempNum = number; //store the number temporarily for palindrome check later
    int reverse = 0; //initialise reverse number (final output) variable

    while (number>0){
        int digit=number%10; //for last digit
        reverse= reverse*10+digit; //to build entire reverse number
        number=number/10; //finally whats the new number after removing last digit
    }

    cout<<reverse<<endl; //final output

    if (reverse==tempNum){
        cout<<"YOU FOUND A PALINDROME!";
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }
}