#include<iostream>
using namespace std;

int main(){

    float total;
    cout<<"enter an amount: ";
    cin>>total;

    int q,d,n,p;
    cout<<"$"<<total<<" is: "<<endl;

    total *= 100;

    q = total/25;
    total -= q*25;

    d = total/10;
    total -= d*10;

    n = total/5;
    total -= n*5;

    p = total/1;
    total -= p*1;
    
    cout<<q<<" quarters"<<endl;
    cout<<d<<" dimes"<<endl;
    cout<<n<<" nickles"<<endl;
    cout<<p<<" pennies"<<endl;

    return 0;
}