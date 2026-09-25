#include<iostream>
#include<string>

using namespace std;

int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    for (int i = 0; i<11; i++){
        int answer = number*i;
        cout<<number<<"*"<<i<<"="<<answer<<endl;
    }
}