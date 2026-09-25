#include<iostream>
using namespace std;

int main(){

    float total = 0;
    int q,d,n,p;

    cout << "quarters?: ";
    cin>>q;

    cout << "dimes?: ";
    cin>>d;

    cout << "nickels?: ";
    cin>>n;

    cout << "pennies?: ";
    cin>>p;

    total = q*0.25 + d*0.10 + n*0.05 + p*0.01;

    cout<<"you have a total of: $"<<total;

    return 0;
}